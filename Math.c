#include <stdio.h>
#include <math.h>

int main(void) {
    printf("sin(45 deg) = %.2f\n", sin(45.f * M_PI / 180));
    printf("cos(45 deg) = %.2f\n", cos(45.f * M_PI / 180));
    printf("tan(45 deg) = %.2f\n", tan(45.f * M_PI / 180));
    printf("square root of 1234 = %.4f\n", sqrt(1234));
    return 0;
}
