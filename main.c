#include "utils.c"
#include "menu.c"


int main(void) {
    while (MenuStatus != 1) {
        menu();
        switch (MenuStatus) {
            case 1:
                good_bye();
                break;
            case 2:
                greetings();
                play();
                break;
            case 3:
                print_score();
                break;
        }
        if (MenuStatus != 1) MenuStatus = 4;

    }

    return 0;
}
