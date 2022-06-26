#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: inputed string.
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int rev = 0, a, b;
	char *x, y;

	while (rev >= 0)
	{
		if (s[rev] == '\0')
			break;
		rev++;
	}
	x = s;

	for (a = 0; a < (rev - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			y = *(x + b);
			*(x + b) = *(x + (b - 1));
			*(x + (b - 1)) = y;
		}
	}
}
