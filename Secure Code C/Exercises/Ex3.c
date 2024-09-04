#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 6
int main( void ) {

    char code[TAM];
    char suffix[] = "new";
    char *r, *new_code;
    int i;

    printf("Insert code: ");
    r = fgets(code, TAM, stdin);
    if (r == NULL)
    {
        fprintf(stderr, "Unable to get the code\n");
        exit(1);
    }

    for (i = 0; i < TAM; i++)
    {
        if (code[i] == '\n') {
            code[i] = '\0';
            break;
        }     
    }
    
    if (strlen(code) != 5) {
        fprintf(stderr, "The code must be 5 characters\n");
        exit(1);
    }
    
    new_code = (char *)malloc(strlen(code) + strlen(suffix) + 1);
    if (new_code == NULL)
    {
        fprintf(stderr, "Unable to allocate memory\n");
        exit(1);
    }
    strcpy(new_code, code);
    strcat(new_code, suffix);

    printf("The code is %s.\n", new_code);   

    for (i = 0; i < strlen(code); i++)
    {
        code[i] = '\0';
    }
    for (i = 0; i < strlen(new_code); i++)
    {
        *(new_code+i) = '\0';
    }
    
    free(new_code);
    new_code = NULL;
    
    return 0;
}