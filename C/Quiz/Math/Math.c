#include <stdio.h>
#include <math.h>

void main () {

    float a, b;

    printf("Enter a number a: ");
    scanf("%f", &a);
    
    printf("Enter a number b: ");
    scanf("%f", &b);

    printf("Add: %f + %f = %f\n", a, b, a+b);
    printf("Sub: %f - %f = %f\n", a, b, a-b);
    printf("Mult: %f * %f = %f\n", a, b, a*b);
    printf("Div: %f / %f = %f\n", a, b, a/b);
    printf("Exp: %f^%f = %f | %f^%f = %f\n", a, b, pow(a,b), b,a, pow(b,a));
    printf("Sqr: sqrt(%f) = %f | sqrt(%f) = %f\n", a, sqrt(a), b, sqrt(b));
}