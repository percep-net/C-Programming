#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=n; i>0; i--) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
