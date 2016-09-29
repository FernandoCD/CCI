#include <stdio.h>

int lower(char x);
int strindex(char s[], char t);
char invert(char x[], int t);

main() 
{
	printf("%c", lower('R'));
}

int lower(char x)
{
	return x += 32;
}

/*strindex(char s[], char t)
{
	int i = 0;
	while (s[i] != EOF)
	{
		if (s[i] == t)
			return i;
		else if (s[i + 1] == EOF)
			return -1;
		i += 1;

	}
}*/

/*char invert(char x[], int t)
{
	int i = 0, val;
	if (t == 2)
	{
		val = x[0];
		x[0] = x[t-1];
		x[t-1] = val;
		printf ("%c%c", x[i], x[t - 1]);
	}
	else
	{
		printf ("%c", x[t - 1]);
		invert (x, t - 1);
	}
}*/
