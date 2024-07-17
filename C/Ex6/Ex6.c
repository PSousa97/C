#include <stdio.h>
#include <math.h>
//Perimetro do circuo P = 2 x PI x r
//Area do circuo A = PI x r^2
    
int main(int argc, char *argv[]){

    float perimetro, area, raio;
    float pi = 3.141592;

    printf("Raio (m): ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * pow(raio, 2);
    
    printf("Perimetro do circulo tem o valor de %f metros.\n", perimetro);
    printf("Area do circulo tem o valor de %f metros", area);

    return 0;
}