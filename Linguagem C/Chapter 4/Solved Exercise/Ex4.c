#include <stdio.h>

int main(void) {

    int i, j, num;
    char c;

    printf("Give a number: ");
    scanf("%d", &num);

    printf("Give a char: ");
    scanf(" %c", &c);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return(0);
}