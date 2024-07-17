#include <stdio.h>

int main(int argc, char *argv[]){

    char array[3] = {'X', 'M', 'L'};
    int i;

    printf("The reverse of XML is ");  
    for(i = 2; i >= 0; i--){
        printf("%c", array[i]);
    }

    return 0;
}