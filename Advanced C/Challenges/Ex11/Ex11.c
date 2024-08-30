#include <stdio.h>
#include <string.h>

int main(void) {

    printf("\nDisplay the array!\n");
    
    char string[]= "Hello world!";
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        printf("[%d] - %c", i, *(string + i)); //putchar("[%d] - %c", i, *(string + i))
    }
    

}