#include <stdio.h>

int main(void) {

    int i, j, num;

    printf("Give a number: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            putchar('A' + i);
        }
        putchar('\n');
    }

    return(0);
}