#include<stdio.h>

#define MAXLENGTH 1000

//Porgram to find Longest String

int getLine();
void copy();

char line[MAXLENGTH];
char longest[MAXLENGTH];
int max;

int main()
{
	extern int max;
	int len;
	max=0;
	while((len=getLine()) > 0)
	{
		if(len > max)
		{
			max = len;
			copy();
		}
	}
	printf("Longest line length is: %d", max);
}

int getLine()
{
	extern char line[];
	unsigned register int loop_var=0;
	char c;
	while(loop_var < MAXLENGTH-1 && (c=getchar()) != EOF && c!='\n')
	{
		if(c!='\n')
		{
			line[loop_var]=c;
			++loop_var;
		}
	}
	line[loop_var]='\0';
	return loop_var;
}

void copy()
{
	extern char line[],longest[];
	unsigned register int loop_var=0;
	while(line[loop_var]!='\0')
	{
		longest[loop_var]=line[loop_var];
		++loop_var;
	}
	longest[loop_var]='\0';
}