#include <stdio.h>
int func(void);

int massive[3] = {1, 2, 3};


int main(void) {
    for (int i = 0; i < 3; i++)
        printf("%d\n", massive[i]);
    printf("another one\n");
    func();
    return 0;
}


int func(void) {
    for (int i = 0; i < 3; i++)
        printf("%d\n", massive[i]);
    return 0;
}
    
