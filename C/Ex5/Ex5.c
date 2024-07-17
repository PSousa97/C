#include <stdio.h>
#include <math.h>
//Perimetro do circuo P = c + l + c + l
//Area do circuo A = c x l
    
int main(int argc, char *argv[]){

    float perimetro, area, comprimento, largura;
    float pi = 3.141592;

    printf("Cumprimento e largura (cm): ");
    scanf("%f %f", &comprimento, &largura);

    perimetro = (comprimento * 2) + (largura * 2);
    area = comprimento * largura;
    
    printf("Perimetro do rectangulo tem o valor de %f cm.\n", perimetro);
    printf("Area do rectangulo tem o valor de %f cm", area);

    return 0;
}