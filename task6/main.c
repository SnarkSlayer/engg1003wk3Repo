#include <stdio.h>

int main()
{
    float b1 = 0.2, b2 = 0.8;
    float x1 = 1, x2 = 0.5;
    float tmp;

    printf("X1: %f\n", x1);
    for (int i = 0; i < 9; i++) {
        printf("X%d: %f\n", (i + 2), x2);
        tmp = x2;
        x2 = b1*x2 + b2*x1;
        x1 = tmp;
    }

    return 0;
}
