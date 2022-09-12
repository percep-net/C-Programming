#include <stdio.h>

int isLeapYear(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return 1;
        }
    } else if (year % 4 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int year = 1900;

    if (isLeapYear(year)) {
        printf("Year %d is a leap year.\n", year);
    } else {
        printf("Year %d is not a leap year.\n", year);
    }

    return 0;
}
