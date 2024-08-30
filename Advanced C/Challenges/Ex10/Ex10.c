#include <stdio.h>

int main(void) {

    printf("\nIncrementing a pointer!\n");
    int x, *ptrx;

    ptrx = &x;

    *ptrx = 6;
    ++ *ptrx ;
    printf("Value of X++ is %d|%d!\n", *ptrx , x);
}