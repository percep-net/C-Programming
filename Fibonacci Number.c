#include <stdio.h>

typedef unsigned long long int llu;

llu nth_fibonacci_number(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return nth_fibonacci_number(n-1) + nth_fibonacci_number(n-2);
    }
}

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Result = %llu\n", nth_fibonacci_number(n));

    return 0;
}
