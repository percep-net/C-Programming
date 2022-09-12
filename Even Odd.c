#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main(void) {
    int x = 12352;

    if (isEven(x)) {
        printf("%d is even.\n", x);
    } else {
        printf("%d is odd.\n", x);
    }

    return 0;
}
