#include <stdio.h>




short MenuStatus = 4;

int greetings(void);
int menu(void);
int print_menu_choice(void);
int good_bye(void);
int print_score(void);

int greetings(void) {
    printf("Hello, players in TicTacToe.\n");
    printf("The map is presented in this way:\n");
    printf(" _______________\n");
    printf("| __ |  . | __ |\n");
    printf("||  || /| | __||\n");
    printf("||__||  | ||__ |\n");
    printf("|____|____|____|\n");
    printf("| __ |    | __ |\n");
    printf("| __|| /_|||__ |\n");
    printf("| __||   || __||\n");
    printf("|____|____|____|\n");
    printf("| __ | __ | __ |\n");
    printf("||__ |   |||__||\n");
    printf("||__||   |||__||\n");
    printf("|____|____|____|\n");
    printf("Enter the corresponding number to put your symbol\n");
    return 0;
}


int menu(void) {
    int choice;
    char ch;
    print_menu_choice();
    while (!(MenuStatus < 4 && MenuStatus > 0)) {
        choice = scanf("%d", &MenuStatus);
        if (choice == 0 || (MenuStatus < 1 || MenuStatus > 3))
            printf("Input number[1- 3]: ");
        do {                //Clear buffer
            ch = getchar();
        } while (ch != '\n');
    }
}


int print_menu_choice(void) {
    printf("1 - End game;\n");
    printf("2 - Start game;\n");
    printf("3 - Global score;\n");
    printf("Choose your action[1-3]: ");
    return 0;
}

int good_bye(void) {
    printf("Good bye. See you soon!\n");
    return 0;
}


int print_score(void) {
    printf("-----Player 1-----\n");
    printf("       %d\n", Score.player1);
    printf("-----Player 2-----\n");
    printf("       %d\n", Score.player2);
    return 0;
}