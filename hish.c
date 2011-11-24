#include <stdio.h>

#define MAXWORDLEN	45

main()
{
	int a[MAXWORDLEN], c, wc, i;

	for (i = 0; i != MAXWORDLEN; ++i)
		a[i] = 0;

	wc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (wc != 0)
				a[wc]++;
			wc = 0;
		}
		else 
		{
			++wc;
		}
	}

	for (i = 0; i != MAXWORDLEN; ++i)
	{
		printf("%2d: ", i);
		while (a[i] > 0)
		{
			putchar('=');
			a[i]--;
		} 
		putchar('\n');
	}
	return 0;
}
