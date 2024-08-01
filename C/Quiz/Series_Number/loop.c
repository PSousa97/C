#include <stdio.h>

void main () {

    int x, y = -10;

    printf("For loop:");
    for (x = 1; x <= 20; x++)
    {
        printf("%d ", x);
    }

    printf("\nWhile loop (even):");
    while (y <= 10)
    {
        printf("%d ", y);
        y+=2;
    }
    
    
}