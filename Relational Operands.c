#include <stdio.h>

int main(void) {
    int a = 12;
    int b = 14;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("(a > b) = %d\n", a > b);    // False
    printf("(a >= b) = %d\n", a >= b);  // False
    printf("(a < b) = %d\n", a < b);    // True
    printf("(a <= b) = %d\n", a <= b);  // True
    printf("(a == b) = %d\n", a == b);  // False
    printf("(a != b) = %d\n", a != b);  // True

    return 0;
}
