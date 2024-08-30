#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 5 

int main(void){
    
    char command[TAM];
    
    printf("Ativaste o cavalo de troia!!\n");
    
    printf("Escreve \"sair\" desativar o cavalo de troia!\n");
    fgets(command, TAM, stdin);

    command[4] = command[5];

    if (strcmp(command, "sair"))
    {
        printf("\nUps foste enganado. Dados encriptados!\n");
        printf("Computador vai desligar em 5 segundos.");
        //system("shutdown /s /t 5");
    } else {
        printf("\nEnvia 1000 euros para o seguinte IBAN PT50002700000001234567833\n");
        printf("Tens 30 segundos para pagar ou o computador fica encriptado para sempre.");
        //system("shutdown /s /t 30");
    }
    
}