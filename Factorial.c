#include <stdio.h>

typedef unsigned long long int llu;

llu factorial(int n) {
    llu res = 1;
    for (int i=2; i<=n; i++) {
        res *= i;
    }
    return res;
}

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}
