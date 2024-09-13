#include <stdio.h>

/*
    Aritmetic problem

*/
int main () {

    int a, b;

    printf("Give two int: ");
    scanf("%d %d", &a, &b);

    printf("Adition: %d + %d = %d\n", a,b, a+b);
    printf("Subtraction: %d - %d = %d\n", a,b, a-b);
    printf("Multiplication: %d * %d = %d\n", a,b, a*b);
    printf("Division: %d / %d = %d\n", a,b, a/b);
    printf("Resto: %d %% %d = %d\n", a,b, a%b);

    return(0);
}