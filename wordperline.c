#include<stdio.h>

int main()
{
    int character;
	while((character=getchar()) != EOF)
	{
		if(character==' ')
		{
			putchar('\n');
            continue;
		}
        putchar(character);
	}
	return 1;
}