#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[32];
    int age;
};

struct person *allocateStruct(void);
void loadStruct(struct person *p);
void displayStruct(struct person *p);

int main() {

    struct person *author;
    author = allocateStruct();

    loadStruct(author);    
    displayStruct(author);
}

struct person *allocateStruct(void) {

    struct person *p1; 
    
    p1 = (struct person *) malloc(sizeof(struct person));
    if (p1 == NULL)
    {
        printf("Error in allocate the structure!\n");
        exit(1);
    }
    
    return p1;
}

void loadStruct(struct person *p) {

    strcpy(p->name, "Pedro");
    p->age = 27;
}

void displayStruct(struct person *p) {

    printf("Name: %s\nAge: %d\n", p->name, p->age);
}