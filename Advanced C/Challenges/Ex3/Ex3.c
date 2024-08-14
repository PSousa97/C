#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    
    if (argc == 1)
        printf("Error: You must give multiple arguments \"Ex3 hello good\".");
    else
        printf("You give %d arguments", argc);

    return (0);
}