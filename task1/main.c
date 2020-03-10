#include <stdio.h>

int main() {
    int x0 = 0;
    int x1 = 2;

    for (int i = x0; i < 10*(x1 - x0); i += (x1 - x0)) {
        printf("%d\n", i);
    }

    return 0;
}
