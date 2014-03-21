#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int character, state=OUT;
	register int line_counter=0, word_counter=0, character_counter=0;
	while((character=getchar()) != EOF)
	{
		++character_counter;
		if(character=='\n')
			++line_counter;
		if(character=='\n' || character=='\t' || character==' ')
			state = OUT;
		else if(state == OUT)
		{
			state = IN;
			++word_counter;	
		}
	}
	printf("No. of lines: %d, No. of words : %d, No. of chars: %d", line_counter, word_counter, character_counter);
	return 1;
}