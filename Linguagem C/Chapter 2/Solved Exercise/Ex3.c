#include <stdio.h>

/*
    int number vs fraction problem

*/

int main () {

    float num;
    
    printf("Give a fraction number: ");
    scanf("%f", &num);

    printf("Left side of the comma of the number %.2f: %d\n", num, (int) num);
    printf("Left side of the comma of the number %.2f: %.2f\n", num, (num - (int) num));

    return(0);
}