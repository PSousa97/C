#include <stdio.h>

int *f();

int main(void) {

    printf("Static Variable!\n\n");
    
    int *array = f();
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);    
    }
    
}

int *f() {

    static int array[] = {2,3,5,7,9};

    return array;
}