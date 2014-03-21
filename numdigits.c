#include<stdio.h>

/* Count Num of digits, white space, others */
int main()
{
    int character, digits[10];
	register unsigned int wspace_counter=0, other_counter=0, loop_var;
	for(loop_var=0; loop_var<10; loop_var++)
	{
		digits[loop_var]=0;
	}
	while((character = getchar()) != EOF)
	{
		if(character >='0' && character <='9')
			++digits[character-'0'];
		else if(character==' ' || character=='\t' || character=='\n')
			++wspace_counter;
		else
			++other_counter;
	}
	printf("Digits=");
	for(loop_var=0; loop_var<10; loop_var++)
	{
		printf("%2d", digits[loop_var]);
	}
	printf("\n%d %d", wspace_counter, other_counter);
	return 0;
}