#include <stdio.h>

#define		LOWER	0
#define		UPPER	300
#define		STEP	20

/*
 * print Fahrenheit-celsius table
 * 	for fahr = 0, 20, ..., 300
 */

double ftoc(int fahr);

main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, ftoc(fahr)); 
}

double ftoc(int f)
{
	return (5.0/9.0)*(f-32);
}
