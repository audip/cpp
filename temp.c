#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	float fahr, cel;
	fahr = UPPER;
	while(fahr>=LOWER)
	{
		cel = (5.0/9.0)*(fahr-32);
		printf("%3.0f\t%6.1f", fahr, cel);
		fahr -= STEP;
	}
}
