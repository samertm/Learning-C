#include <stdio.h>
#include <stdlib.h>

double absolute(double x);

int main()
{
	printf("find the square root of: ");
	char c[1000];
	scanf("%s", c);
	double x = atof(c);
	double g = 1.0;
	while (absolute(g*g - x) > .000001) 
		g = (g + x/g) / 2;
	printf("%f\n", g);
}

double absolute(double x)
{
	if (x > 0)
		return x;
	if (x < 0)
		return -x;
	return 0;
}
