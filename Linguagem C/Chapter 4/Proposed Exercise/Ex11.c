#include <stdio.h>

int main(void) {

    char c;
    int i, conta;

    for (i = 0, conta = 1; i < 255; i++)
    {
        printf("%2d --> %c\n", i, i);
        if (conta == 20)
        {
            do {
                printf("'c' to continue: ");
                scanf(" %c", &c);
            }while(c != 'c' && c != 'C');
            
            conta = 1;
        } 
        conta ++;
    }

    return(0);
}   