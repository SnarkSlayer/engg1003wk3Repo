#include <stdio.h>

int main()
{
    int x0 = 0;
    int x1 = 2;
    int sum = 0;

    for (int i = x0; i < 10*(x1 - x0); i += (x1 - x0)) {
        printf("%d\n", i);
        sum += i;
    }
    printf("\nSum: %d", sum);

    return 0;
}
