#include <stdio.h>

#define TAM 5
int main()
{
	char names[TAM][9] = {
		"Ant",
		"Bee",
		"Cat",
		"Duck",
		"Elephant"
	};
	int x;

	for(x=0;x<TAM;x++)
		printf("%s\n",names[x]);

	return(0);
}

