#include <stdio.h>

int main(void) {

    int num, i;

    printf("Give a number: ");
    scanf("%d", &num);


    for (i = num; ; i++)
    {
        if (i % 10 == 0)
        {
            break;
        } else if (i % 3 == 0)
        {
            continue;
        }
        
        printf("%d\n", i);
    }

    return(0);
}