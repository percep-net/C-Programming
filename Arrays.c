#include <stdio.h>

int main(void) {
    int n = 5;
    int ar[n];

    ar[0] = 5;
    ar[1] = 12;
    ar[2] = 9;
    ar[3] = 1;
    ar[4] = 3;

    float sum = 0;
    for (int i=0; i<n; i++) {
        sum += ar[i];
    }

    printf("Mean = %f\n", sum / n);

    return 0;
}
