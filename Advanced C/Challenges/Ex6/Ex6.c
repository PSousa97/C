#include <stdio.h>
#include <string.h>

#define SIZE 20
char *sort(char *string);

int main(void) {

    printf("Sort Array !\n\n");
    
    char *string, *sortString;
    
    printf("Write some text: ");
    fgets(string, SIZE, stdin);

    sortString = sort(string);
    printf("Sorted string.\n");
    puts(sortString);
}


char *sort(char *string) {

int length = strlen(string);
int temp;

    for (int i = 0; i < length; i++)
    {
        for (int t = i + 1; t < length; t++)
        {
            if (string[i] > string[t])
            {
                temp = string[t];
                string[t] = string[i];
                string[i] = temp;
            }
            
        }
        
    }

    return string;
}