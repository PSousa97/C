#include <stdio.h>
#include <string.h>

#define SIZE 20

void textModif(char *text);

int main(void) {

    printf("Modify Array !\n\n");
    
    char *text;
    
    printf("Write some text: ");
    fgets(text, SIZE, stdin);

    printf("\nBefore modification!\n");
    puts(text);

    textModif(text);

    printf("\nAfter modification!\n");
    puts(text);
}

void textModif(char *text) {

    int length = strlen(text);
    int i;
    
    strupr(text);

    for (i = 0; i < length; i++)
    {
        if (text[i] == ' ')
        {
            text[i] = '_';
        } 
    }
}