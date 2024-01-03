#include <stdio.h>
#include "vars.h"
#include "map.c"
#include "menu.c"


int move(void);
int turn_player(int);
int have_won(void);
int draw(void);
int grats(void);
int play(void);

int MAP[LENGTH] = {};
char X = 'X';
char O = 'O';
int Player = 1;
int Moves = 0;



int play() {
    int pos, result;
    fill_map();
    print_map();
    while ((result = have_won()) == 1 && Moves < 10) {
        pos = move();        
        Moves++;
        
        fill_square(pos);
        Player = turn_player(Player);
        print_map();
    }

    if (result == 0)
        grats();
    else
        draw();

}


int turn_player(int player) {
    if (player == 1) return 2;
    else return 1;
}


int clear_buffer(void) {
    char ch = getchar();
    while (ch != '\n') ch = getchar();
    return 0;
}


int move(void) {
    int pos, try = 0;
    char ch;
    
    printf("Player %d, input your number[0-8]: ", Player);
    while (try != 1 || (!(pos < 9 && pos >= 0))) {
        try = scanf("%d", &pos);
         // Is square engaged?
        if (pos > 9 || pos < 0) {
            try = 0;
            printf("Please %d enter one number[0-8]: ", Player);
        }
        else if (is_free_square(pos) == 1) {
            printf("The square %d is engaged, try another one!\n", pos);
            printf("Player %d, input your number[0-8]: ", Player);
            try = 0;
        }
        else if (try == 0)
            printf("Please %d enter one number[0-8]: ", Player);

        clear_buffer();
    }
    
    printf("You entered %d\n", pos);
    return pos;
}


int have_won(void) {
    int win_pos[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8},
                         {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
                         {0, 4, 8}, {2, 4, 6}};
    for (int i = 0; i < 8; i++) {
        int f = MAP[win_pos[i][0]]; 
        if (f == SPACE) continue;
        int s = MAP[win_pos[i][1]], t = MAP[win_pos[i][2]];
        if (f == s && s == t) {
            return 0;
        }
    }
    return 1;
}


int grats(void) {
    printf("-----------------------------------\n");
    printf("Congratulations, player %d. You won\n", turn_player(Player));
    printf("-----------------------------------\n");
}


int draw() {
    printf("-----------------------------------\n");
    printf("This time frendship won\n");
    printf("-----------------------------------\n");
}