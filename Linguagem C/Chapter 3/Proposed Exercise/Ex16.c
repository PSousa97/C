#include <stdio.h>

int main(void) {

    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num == 0) //num | !num | num != 0
    {
        printf("The number is equal to zero.\n");
    } else
    {
        printf("The number is diferent from zero.\n");
    }
    

    return(0);
}