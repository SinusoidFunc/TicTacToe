#include "vars.h"
#include <stdio.h>


int is_free_square(int);
int fill_map(void);
int print_map(void);
int fill_square(int);

int fill_square(int pos) {
    if (Player == 1) MAP[pos] = X;
    else MAP[pos] = O;
    return 0;
}

int fill_map(void) {
    for (int i = 0; i < LENGTH; i++)
        MAP[i] = SPACE;   
    return 0;
}

int print_map(void) {
    printf("-------     -------\n");
    printf("|%c|%c|%c|     |0|1|2|\n", MAP[0], MAP[1], MAP[2]);
    printf("-------     -------\n");
    printf("|%c|%c|%c|     |3|4|5|\n", MAP[3], MAP[4], MAP[5]);
    printf("-------     -------\n");
    printf("|%c|%c|%c|     |6|7|8|\n", MAP[6], MAP[7], MAP[8]);
    printf( "-------     -------\n");
    return 0;
}


int is_free_square(int i) {
    int square = MAP[i];
    if (square == SPACE) return 0;
    else return 1;
}
