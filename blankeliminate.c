#include<stdio.h>

int main()
{
	int character;
	register int line_counter;
	while((character=getchar()) != EOF)
	{
		if(character != ' ')
		{
			putchar(character);
		}
	}
	return 1;
}