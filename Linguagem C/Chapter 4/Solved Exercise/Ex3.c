#include <stdio.h>

int main(void) {

    int i, num;

    printf("Give a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d %d\n", i, (num - i + 1));
    }

    return(0);
}