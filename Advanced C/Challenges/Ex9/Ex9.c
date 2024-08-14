#include <stdio.h>

struct weather {
		char day[10];
		float temp;
	};


int main()
{
	struct weather week[7] = {
		{ "Sunday", 72.5 },
		{ "Monday", 68.4 },
		{ "Tuesday", 75.0 },
		{ "Wednesday", 73.8 },
		{ "Thursday", 65.1 },
		{ "Friday", 72.8 },
		{ "Saturday", 75.2 }
	};
  
	struct weather temp;

	week[1] = week[5];

	for (int i = 0; i < 7; i++)
        for (int t = i + 1; t < 7; t++)
            if (week[i].temp > week[t].temp)
            {
                temp = week[t];
                week[t] = week[i];
                week[i] = temp;
            }   

    printf("Array order!\n\n");

    for (int i = 0; i < 7; i++)
        printf("%s -> %.1f degrees\n", week[i].day, week[i].temp);

	return(0);
}

