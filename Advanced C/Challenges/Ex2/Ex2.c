#include <stdio.h> 

int main() {

    int number;

    printf("Second Challenge!\n");
    printf("Input a integer number: ");
    scanf("%d", &number);

    printf("\nThe number %d is %s", number, (number % 2 == 0) ? "Even" : "Odd");

    return (0);
}