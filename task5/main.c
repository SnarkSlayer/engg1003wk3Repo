#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x0 = 1.0;
    float x1 = 0.5;
    float xn = x0;
    float sum = x0;
    char lim[] = "of the first 100 terms of";


    if (x1/x0 > 1 || x1/x0 < -1) {
        printf("This sequence diverges...\n\n%f\n", x0);
        for (int i = 0; i < 9; i++) {
            xn *= (x1/x0);
            printf("%f\n", xn);
        }
    } else if (x1/x0 < 1 && x1/x0 > -1) {
        printf("This sequence converges...\n\n");
        for (int i = 0; i < 100; i++) {
            xn *= (x1/x0);
            sum += xn;
            if ((sum / 10000) > xn) {
                strcpy(lim, "of");
                break;
            }
        }
        printf("The sum %s this sequence is: %f", lim, sum);
    }

    return 0;
}
