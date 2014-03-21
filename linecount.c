#include<stdio.h>

int main()
{
	int character;
	register int line_counter;
	while((character=getchar()) != EOF)
	{
		if(character=='\n')
		{
			++line_counter;
		}
	}
	printf("Number of lines: %d", line_counter);
	return 1;
}