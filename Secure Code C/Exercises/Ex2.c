#include <stdio.h>
#include <stdlib.h>

void getWinnings(char *input, char *res);
float processingInput(char *input, char *output, char *res);

#define TAM 10

int main (void) {

    printf("Lotery winning!\n");

    char input[TAM];
    char output[TAM];
    char *res;
    float winnings;

    printf("How much you win: ");
    getWinnings(input, res);
    
    winnings = processingInput(input, output, res);
 
    if (winnings < 0)
    {
        printf("Negative winnings not allowed.\n");
        exit(1);
    }
    
    winnings *= 0.55;

    printf("With the tax bit at 45%% You will receive %.2f euros in winnings.\n", winnings);

    return 0;
}


void getWinnings(char *input, char *res) {

    res = fgets(input, TAM, stdin);
    if (res == NULL)
    {
        fprintf(stderr, "Null string input\n");
        exit(1);
    }
}

float processingInput(char *input, char *output, char *res) {

    int a, b, winnings;

    for (a = 0, b = 0; a < TAM; a++, b++)
    {
        if (input[a] == '\n')
            input[a] = '\0';
        
        if (input[a] == ',')
        {
            a++;
            continue;
        }
        
        output[b] = input[a];
    }

    winnings = strtof(output, &res);
    if (res == output)
    {
        fprintf(stderr, "Invalid input\n");
        exit(1);
    }
    
    return winnings;
}