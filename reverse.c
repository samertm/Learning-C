#include <stdio.h>
#include <string.h>

void reverse(char **string);

int main()
{
	int MAXLINE = 1000;
	char *c = (char *) malloc (MAXLINE + 1);
	while (getline(&c, &MAXLINE, stdin)) {
		reverse(&c);
		printf(c);
	}
	return 0;		
}

void reverse(char **s)
{
	char c; 
	int i, j;
	j = strlen(s) - 1;
	for (i = 0; i < strlen(s) / 2; ++i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		--j;
	}
}
