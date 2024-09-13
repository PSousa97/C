#include <stdio.h>

int main(void) {

    //Hours to seconds

    int hour;
    long seconds;
    
    printf("Hours: ");
    scanf("%d", &hour);

    seconds = hour > 0 ? hour * 3600L : 0;

    printf("%d hour(s) have %d second(s).\n", hour, seconds);

    return(0);
}