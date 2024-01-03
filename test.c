#include <stdio.h>
#include <ctype.h>

int main() {
    char* massive[2][2] = {{'H', 'A'}, {'L', 'O'}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("The char is: %c\n", massive[i][j]);
        }
    }
    return 0;

}