#include <stdio.h>

int main(void) {

    int year;

    printf("Input a year: ");
    scanf("%d", &year);


    if (year % 10 == 0 && year % 400 == 0)
    {
       printf("The year %d is a leap year", year);
    } 
     else if (year % 4 == 0)
    {
        printf("The year %d is a leap year", year);
    } else
        printf("The year %d is not a leap year", year);
    
    
    return(0);
}