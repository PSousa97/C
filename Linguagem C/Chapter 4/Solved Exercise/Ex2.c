#include <stdio.h>

int main(void) {

    int i, j, num;

    printf("Give a number: ");
    scanf("%d", &num);

    for (i = 1, j = num; i <= num; i++, j--)
    {
        printf("%d %d\n", i, j);
    }

    return(0);
}