#include <stdio.h>

float askNumber();

int main () {

    printf("Operator challenge!\n");

    float number = askNumber();

    number *= 5; // number = number * 5;
    printf("Multiply by 5 equals %.1f\n", number);

    number /= 3; // number = number / 3;
    printf("Devide by 3 equals %.1f\n", number);

    return (0);
}


float askNumber() {

    float number = 0;

    printf("\nInput a number: ");
    scanf("%f", &number);

    return (number);
}