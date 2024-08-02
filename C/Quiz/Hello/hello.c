#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 64

void removeEnter(char *array);

int main() {

    char *name;

    name = malloc(sizeof(char) * TAM);
    if(name == NULL) {
        printf("Unable to allocate memory!");
        return (1);
    }

    printf("Name: ");
    fgets(name, TAM, stdin);

    removeEnter(name);

    printf("Hello %s!", name);

    return (0);
}

void removeEnter(char *array) {

    int tam = strlen(array);

    *(array + (tam-1)) = *(array + tam);

}