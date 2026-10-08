#include <stdio.h>
int main() {
    char signal;
    printf("Enter signal (R,Y,G): ");
    scanf(" %c", &signal);

    switch (signal) {
        case 'R': printf("Stop\n"); break;
        case 'Y': printf("Wait\n"); break;
        case 'G': printf("Go\n"); break;
        default: printf("Invalid signal\n");
    }
    return 0;
}
