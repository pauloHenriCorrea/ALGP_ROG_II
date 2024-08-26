#include <stdio.h>

double residential_calculation(double kWa);
double industrial_calculation(double kWa);
double commercial_calculation(double kWa);

int main() {
    double kWh, value;
    char type;

    printf("INFORM THE AMOUNT OF KWH CONSUMED AND THE TYPE OF INSTALLATION: \n");
    scanf("%lf %c", &kWh, &type);


    switch (type) {
        case 'R':
            value = residential_calculation(kWh);
            break;

        case 'I':
            value = industrial_calculation(kWh);
            break;

        case 'C':
            value = commercial_calculation(kWh);
            break;

        default:
            printf("ERROR");
            break;
    }
    printf("THE AMOUNT TO BE PAID IS: %lf", value);
}

double residential_calculation(double kWa) {
    if (kWa > 500.0) {
        return kWa * 0.65;
    } else {
        return kWa * 0.40;
    }
};

double commercial_calculation(double kWa) {
    if (kWa > 1000.0) {
        return kWa * 0.60;
    } else {
        return kWa * 0.55;
    }
};

double industrial_calculation(double kWa) {
    if (kWa > 5000.0) {
        return kWa * 0.55;
    } else {
        return kWa * 0.60;
    }
};