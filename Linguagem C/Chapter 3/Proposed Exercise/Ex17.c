#include <stdio.h>

int main(void) {

    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    switch (num == 0)
    {
    case 1:
        printf("The number is equal to zero.\n");
        break;
    case 0:
        printf("The number is diferent from zero.\n");
        break;
    }
    
    return(0);
}