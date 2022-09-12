#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int num) {
    int n = 0;
    int sum = 0;
    for (int ash = num; ash != 0; n++) {
        ash /= 10;
    }
    for (int i=0, ash=num; i<n; i++) {
        sum += pow(ash % 10, n);
        ash /= 10;
    }
    return sum == num;
}

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (isArmstrongNumber(n)) {
        printf("n is an armstrong number.\n");
    } else {
        printf("n is not an armstrong number.\n");
    }

    return 0;
}
