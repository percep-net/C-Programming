#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) {
        for (int k=0; k<(n-i); k++) {
            printf(" ");
        }
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
