#include "main.h"

/**
 * print_rev - prints inputed string in reverse.
 *
 * @s: input string.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int rev = 0;

	while (rev >= 0)
	{
		if (s[rev] == '\0')
		{
			break;
		}
		rev++;
	}

	for (rev--; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
