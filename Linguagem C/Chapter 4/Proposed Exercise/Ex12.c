#include <stdio.h>

int main(void) {

    int min, max, temp, i;

    printf("ASCII - Give two numbers: ");
    scanf("%d %d", &min, &max);
    
    if ((min <= -1 || min >= 256) || (max <= -1 || max >= 256))
    {
        printf("Invalid input.\n");
        return(1);
    }
    
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }
    
    for (i = min; i <= max; i++)
    {
        printf("%2d --> %c\n", i, i);
    
    }

    return(0);
}