#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	for (i = 1; i < argc; i++) {
		putchar(argv[i][0]);
	}
	putchar('\n');
	return 0;
}
