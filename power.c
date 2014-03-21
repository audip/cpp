#include<stdio.h>

int power(int m, int n);

int main()
{
	register unsigned int loop_var=0;
	for(loop_var=1; loop_var<10; ++loop_var)
	{
		printf("Powers of 2: %d, 3: %d", power(2,loop_var), power(-3,loop_var));
	}
	return 0;
}
int power(int base, int raise)
{
	int p=1;
	unsigned register int loop_var=1;
	while(loop_var<=raise)
	{
		p=p*base;
		++loop_var;
	}
	return p;
}