#include <stdio.h>

int main(void)
{

    int month;

    printf("Input a month(1 ... 12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The month %d have 31 days.\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("The month %d have 30 days.\n", month);
        break;
    case 2:
        printf("The month %d have 28 and 29 days in leap year.\n", month);
        break;
    default:
        printf("Invalid input.\n");
    }
    return (0);
}

/*
Ex19.1

 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("The month %d have 31 days.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("The month %d have 30 days.\n", month);
    } else if (month == 2)
    {
        printf("The month %d have 28 and 29 days in leap year.\n", month);
    } else 
        printf("Invalid input.\n");

Ex19.2 

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The month %d have 31 days.\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("The month %d have 30 days.\n", month);
        break;
    case 2:
        printf("The month %d have 28 and 29 days in leap year.\n", month);
        break;
    default:
        printf("Invalid input.\n");
    }

Ex19.3

switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The month %d have 31 days.\n", month);
    case 4:
    case 6:
    case 9:
    case 11:
        printf("The month %d have 30 days.\n", month);
    case 2:
        printf("The month %d have 28 and 29 days in leap year.\n", month);
    default:
        printf("Invalid input.\n");
    }
*/