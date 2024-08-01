#include <stdio.h>
#include <ctype.h>
#include <string.h>

void joinStrings(char b1[], char b2[]);

int main() {

    char b1[20];
    char b2[20];

    printf("First Name: ");    
    fgets(b1, 20, stdin);

    printf("Last Name: ");
    fgets(b2, 20, stdin);

    joinStrings(b1, b2);

    return (0);   
}

void joinStrings(char b1[], char b2[]) {

    char buffer[40];
    int size = 0;
  
    strcpy(buffer, b1);
    size = strlen(buffer);
    buffer[size-1] = ' ';
    strcat(buffer, b2);

    printf("Your name is %s", buffer);
}

