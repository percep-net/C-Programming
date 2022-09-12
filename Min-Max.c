#include <stdio.h>

int min(int n, int ar[]) {
    int min = ar[0];
    for (int i=1; i<n; i++) {
        if (ar[i] < min)
            min = ar[i];
    }
    return min;
}

int max(int n, int ar[]) {
    int max = ar[0];
    for (int i=1; i<n; i++) {
        if (ar[i] > max)
            max = ar[i];
    }
    return max;
}

int main(void) {
    int n = 10;
    int ar[] = {5, 2, 7, 1, 13, 15, 21, 6, 20, 9};
    printf("Max = %d\n", max(n, ar));
    printf("Min = %d\n", min(n, ar));
    return 0;
}
