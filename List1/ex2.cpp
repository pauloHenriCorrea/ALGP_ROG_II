#include <stdio.h>

int main() {
    double speed, value;

    printf("ENTER THE SPEED: \n");
    scanf("%lf", &speed);

    if (speed > 80.0) {
        value = (speed - 80.0) * 5;
        printf("THE AMOUNT PAID IS: %.2f", value);
    }

    return 0;
}