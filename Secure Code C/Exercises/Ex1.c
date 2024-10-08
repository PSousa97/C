#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	int index, r;
	//Issue 1: Change data type for getch() to int: 
	int ch;
	const char filename[] = "challenge.txt";
	FILE *fp;

	buffer = (char *)malloc( sizeof(char) * 32 );
	//Issue 2: Confirm buffer allocated:
	if (buffer == NULL)
	{
		fprintf(stderr, "Unable to allocate 32 bytes!\n");
		exit(1);
	}

	printf("Type some text: ");
	index = 0;
	//Issue 3: Avoid using getchar() as a loop condition:
	while( 1 )
	{
		ch = getchar();
		*(buffer+index) = ch; 
		index++;

		//Issue 4: Test the "array" bounds! 31 is the last offset in the buffer
		if (index == 31)
			break;
		//Issue 5: Test for the EOF end of file
		if( ch=='\n' || ch == EOF)
			break;
	}
	/* cap the string */
	*(buffer+index) = '\0';

	fp = fopen(filename,"w");
	//Issue 6: Test wether the file opened:
	if (fp == NULL)
	{
		fprintf(stderr, "Unable to open file!\n");
		exit(1);
	}
	//Issue 7: Confirm data written:
	r = fwrite(buffer,1,index,fp);
	if (r != index)
		puts("Error writing data");
	else
		printf("Wrote %d bytes to %s\n", index, filename);
	//Issue 8: Test file closing:
	r = fclose(fp);
	if (r != 0)
	{
		fprintf(stderr, "Unable to close the file\n");
		exit(1);
	}
	
	printf("%s created\n",filename);

	return(0);
}

