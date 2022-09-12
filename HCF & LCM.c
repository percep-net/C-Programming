#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    int c = a;
    int d = b;
    int t;

    while (d != 0) {
        t = c % d;
        c = d;
        d = t;
    }

    printf("HCF = %d\n", c);

    d = (a * b) / c;

    printf("LCM = %d\n", d);

    return 0;
}
