#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, xtemp;
    int iterations;
    for (float y = 1; y > -1; y -= 0.05) {
        for (float x = -2; x < 2; x += 0.05) {
            //TESTING
            x1 = 0; y1 = 0; xtemp = 0;
            iterations = 0;
            while((x1*x1 + y1*y1 < 4) && iterations <= 1000) {
                xtemp = x1*x1 - y1*y1 + x;
                y1 = 2*x1*y1 + y;
                x1 = xtemp;
                iterations++;
            }
            //=======
            //Printing
            if (iterations >= 1000) {
                printf("#");
            } else {
                printf(" ");
            }
            //=========
        }
        printf("\n");
    }

    return 0;
}
