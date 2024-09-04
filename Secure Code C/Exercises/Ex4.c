#include <stdio.h>
#include <stdlib.h>

int get_number(void)
{
    char *buffer, *r;
    int const SIZE = 4;
    int number;

    buffer = (char *) malloc(sizeof(char) * SIZE);
    if (buffer == NULL)
    {
        fprintf(stderr, "Unable to allocate memory\n");
        exit(1);
    }
    
    r = fgets(buffer, SIZE, stdin);
    if (r == NULL)
    {
        fprintf(stderr, "Input error\n");
        exit(1);
    }
  
    number = strtol(buffer, &r, 10);
    if (r == buffer)
    {
        fprintf(stderr, "Invalid input\n");
        exit(1);
    }

    if (number < 0 || number > 99)
    {
        printf("%d is out of range\n", number);
        exit(1);
    }
    for (int i = 0; i < SIZE; i++)
    {
        *(buffer+i) = '\0';
    }
    
    free(buffer);

    return number;
}

int main()
{
	int x,digit[3];

	puts("Valid digits are from 0 to 99");
	for( x=0; x<3; x++ )
	{
		printf("Enter digit #%d: ",x+1);
		digit[x] = get_number();
	}

	printf("The combination is: ");
	for( x=0; x<3; x++ )
	{
		printf(" %02d",digit[x]);
        digit[x] = 0;
	}
	putchar('\n');

	return(0);
}
