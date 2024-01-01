#include <stdio.h>
#include <stdlib.h>
#define LENGTH 9
#define SPACE 32
int MAP[LENGTH] = {};
char X = 'X';
char O = 'O';
int Player = 1;


int fill_map(void);
int print_map(void);
int move();
void print_field(void); // Need to remove
int check_square(int);
int fill_square(int);
int turn_player(int);


int main() {
    int pos;
    fill_map();
    print_map();
    while (1) {
        pos = move();
        fill_square(pos);
        Player = turn_player(Player);
        print_map();
    }
}

int fill_square(int pos) {
    if (Player == 1) MAP[pos] = X;
    else MAP[pos] = O;
    return 0;
}

int turn_player(int player) {
    if (player == 1) return 2;
    else return 1;
}


int fill_map(void) {
    for (int i = 0; i < LENGTH; i++)
        MAP[i] = SPACE;   
    return 0;
}

void print_field(void) {
    for (int i = 0; i < LENGTH; i++) {
        printf("MAP pos: %d value: %d\n", i, MAP[i]);
    }
}
int print_map(void) {
    printf("-------\n");
    printf("|%c|%c|%c|\n", MAP[0], MAP[1], MAP[2]);
    printf("-------\n");
    printf("|%c|%c|%c|\n", MAP[3], MAP[4], MAP[5]);
    printf("-------\n");
    printf("|%c|%c|%c|\n", MAP[6], MAP[7], MAP[8]);
    printf( "-------\n");
    return 0;
}

int check_square(int i) {
    int square = MAP[i];
    if (square == SPACE) return 0;
    else return 1;
}

int clear_buffer(void) {
    char ch = getchar();
    while (ch != '\n') ch = getchar();
    return 0;
}

int move() {
    int pos, status, try = 0;
    char ch;
    
    printf("Player %d, input your number[0-8]: ", Player);
    while (try != 1 || (!(pos < 9 && pos >= 0))) {
        try = scanf("%d", &pos);
        status = check_square(pos); // Is square engaged?
        if (status == 1) {
            printf("The square %d is engaged, try another one!\n", pos);
            try = 0;
        }
        
        printf("Please %d enter one number[0-8]: ", Player);
        clear_buffer();
    }
    
    printf("\nYou entered %d\n", pos);
    return pos;
}




