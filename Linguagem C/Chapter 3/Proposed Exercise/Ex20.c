#include <stdio.h>


int main (void) {

    int day, month, year;

    printf("Input a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month)
    {
    case 2:
        if (day >= 1 && day <= 28 + (year % 4))
        {
            printf("%d/%d/%d is a valid date.\n", day, month, year);
        } else
        {
            printf("%d/%d/%d is not a valid date.\n", day, month, year);
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day >= 1 && day <= 30)
        {
            printf("%d/%d/%d is a valid date.\n", day, month, year);
        } else
        {
            printf("%d/%d/%d is not a valid date.\n", day, month, year);
        }
    break;

    default:
        if (month < 1 || month > 12)
        {
            printf("%d/%d/%d is not a valid date.\n", day, month, year);
        }
         else if (day >= 1 && day <= 31)
        {
            printf("%d/%d/%d is a valid date.\n", day, month, year);
        } else
        {
            printf("%d/%d/%d is not a valid date.\n", day, month, year);
        }
    }
    return (0);
}


/*
int checkDay(int day, int month, int year);
int checkLeapYear(int year);

int main(void) {

    int day, month, year;

    printf("Input a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (checkDay(day, month, year))
    {
        printf("%d/%d/%d is a valid date.\n", day, month, year);
    } else 
        printf("%d/%d/%d is not a valid date.\n", day, month, year);
    
    
    return(0);
}

int checkDay(int day, int month, int year) {

    int valid = 0;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) )
    {
        if (day >= 1 && day <= 31)
            valid = 1;


    } else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day >= 1 && day <= 30)
            valid = 1;


    } else if (month == 2)
    {
        if (checkLeapYear(year) && (day >= 1 && day <= 29))
        {
            valid = 1;
        } else if (!checkLeapYear(year) && (day >= 1 && day <= 28))
        {
            valid = 1;
        } else
            valid = 0;

    } else 
        printf("Invalid input.\n");

    return valid;    
}

int checkLeapYear(int year) {

    int leapYear = 0;

    if (year % 10 == 0 && year % 400 == 0)
    {
        leapYear = 1;
    } else if (year % 4 == 0)
    {
        leapYear = 1;
    }
    
    return leapYear;
}
*/