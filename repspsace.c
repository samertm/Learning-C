#include <stdio.h>

main()
{
	int c, buff;

	buff = -1;
	while ((c = getchar()) != EOF)
	{
		if (buff == ' ' &&  c == ' ')
			;
		else
			putchar(c);
		buff = c;
	}
}
