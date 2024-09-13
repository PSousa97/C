#include <stdio.h>

/*
    Date problem

*/

int main () {

    int day, month, year;
    
    printf("Give date(yyyy-mm-dd): ");
    scanf("%d-%d-%d", &year, &month, &day);

    printf("The date is %d/%d/%d\n", day, month, year);
    
    return(0);
}