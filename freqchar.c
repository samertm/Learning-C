#include <stdio.h>

#define MAXCHAR		'~'					/* last char in the ascii table */
#define MINCHAR		'!'					/* first char in the ascii table */
#define ARRLEN		MAXCHAR - MINCHAR 

int main()
{
	int a[ARRLEN], c, i;

	for (i = 0; i != ARRLEN; ++i)
		a[i] = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c >= MINCHAR && c <= MAXCHAR)
		{
			++a[c - MINCHAR];
		}
	}

	for (i = 0; i!= ARRLEN; ++i)
	{
		printf("%c: ", i + MINCHAR);
		while (a[i] != 0)
		{
			putchar('=');
			--a[i];
		}
		putchar('\n');
	}

	return 0;
}
