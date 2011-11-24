#include <stdio.h>

main()
{
	int c, sp;

	sp = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++sp;
		if (c == '\t')
			++sp;
		if (c == ' ')
			++sp;
	}
	printf("%d\n", sp);
}
