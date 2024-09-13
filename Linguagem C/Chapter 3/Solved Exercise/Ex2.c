#include <stdio.h>

int main(void) {

    //Hours to seconds (with if - else)

    int hour;
    long minutes, seconds, ten_second;
    char mode;
    
    printf("Hours: ");
    scanf("%d", &hour);
    printf("What to show(m:minute|s:second|d:ten_second): ");
    scanf(" %c", &mode);

    if ('m' == mode || 'M' == mode)
    {
        minutes = hour > 0 ? hour * 60L : 0;
        printf("%d hour(s) have %d minute(s).\n", hour, minutes);
    }else if ('s' == mode || 'S' == mode)
    {
        seconds = hour > 0 ? hour * 3600L : 0;
        printf("%d hour(s) have %d second(s).\n", hour, seconds);
    } else if ('d' == mode || 'D' == mode)
    {
        ten_second = hour > 0 ? hour * 36000L : 0;
        printf("%d hour(s) have %d ten of a second(s).\n", hour, ten_second);
    } else 
    {
       printf("Mode invalid.\n");
    }
    
    
    return(0);
}