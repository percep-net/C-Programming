#include <stdio.h>

int main(void) {
    int a = 12;
    int b = 14;

    if (a > b) {
        printf("a is greater than b.\n");
    } else if (a < b) {
        printf("a is less than b.\n");
    } else {
        printf("a and b are equal to each other.\n");
    }

    return 0;
}
