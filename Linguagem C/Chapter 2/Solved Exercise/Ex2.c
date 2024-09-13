#include <stdio.h>

/*
    Hour, minute and second problem

*/

int main () {

    int input, second, minute, hour;

    printf("Seconds: ");
    scanf("%d", &input);

    hour = input / 3600;
    minute = (input % 3600) / 60;
    second = input % 60;

    printf("%d seconds = %dh : %dm : %ds\n", input, hour, minute, second);

    return(0);
}