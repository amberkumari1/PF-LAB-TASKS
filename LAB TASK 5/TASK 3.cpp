#include <stdio.h>
int main() {
    int x, y, z, w;
    printf("Enter the value of x,y,z,w : ");
    scanf("%d %d %d %d", &x, &y, &z, &w);

    if (x > y) {
        if (x > z) {
            if (x > w)
                printf("The largest value is of x = %d", x);
            else
                printf("The largest value is of w = %d", w);
        }
        else {
            if (z > w)
                printf("The largest value is of z = %d", z);
            else
                printf("The largest value is of w = %d", w);
        }
    }
    else {
        if (y > z) {
            if (y > w)
                printf("The largest value is of y = %d", y);
            else
                printf("The largest value is of w = %d", w);
        }
        else {
            if (z > w)
                printf("The largest value is of z = %d", z);
            else
                printf("The largest value is of w = %d", w);
        }
    }
    return 0;
}
