#include <stdio.h>

int main()
{
    float b1 = 0.2, b2 = 0.2;
    float x1 = 1, x2 = 0.5;
    int pos = 0, neg = 0;
    float tmp;

    //CORE CALCS
    //testing diff
    if ((x2 - x1) > 0) {
        pos = 1;
    } else if ((x2 - x1) < 0) {
        neg = 1;
    }
    //------------
    printf("X1: %f\n", x1);
    for (int i = 0; i < 19; i++) {
        printf("X%d: %f\n", (i + 2), x2);
        tmp = x2;
        x2 = b1*x2 + b2*x1;
        x1 = tmp;
        //TESTING OSCILLATION
        //testing diff
        if ((x2 - x1) > 0) {
            pos = 1;
        } else if ((x2 - x1) < 0) {
            neg = 1;
        }
        //------------
        if (pos == 1 && neg == 1) {
            printf("This sequence oscillates");
            return 0;
        }
        //===================
    }
    //==========

    printf("This sequences does not oscillate");
    return 0;
}
