#include <stdio.h>

/*
    Date problem

*/

int main () {

    int day, month, year;
    
    printf("Give day: ");
    scanf("%d", &day);
    printf("Give month: ");
    scanf("%d", &month);
    printf("Give year: ");
    scanf("%d", &year);

    printf("The date is %d/%d/%d\n", day, month, year);
    
    return(0);
}