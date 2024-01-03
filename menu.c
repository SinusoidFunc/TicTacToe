#include "vars.h"

MenuStatus = 1;

int greetings(void);

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


// int menu(void) {
//     while (MenuStatus != 0) {
        
//     }
// }
