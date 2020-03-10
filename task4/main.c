#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x0 = 1.0;
    float x1 = 2.0;
    float xn = x0;
    float sum = x0;

    printf("%f\n", x0);
    for (int i = 0; i < 9; i++) {
        xn *= (x1/x0);
        sum += xn;
        printf("%f\n", xn);
    }
    printf("\nSum: %f", sum);

    return 0;
}
