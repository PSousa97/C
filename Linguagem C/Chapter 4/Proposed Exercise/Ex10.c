#include <stdio.h>

int main(void) {

    int num;

    do
    {
        printf("Give a number: ");
        scanf("%d", &num);
    } while (num < 1 || num > 100);
    
    

    return(0);
}