#include "main.h"

/**
 * _puts2 - prints each character of a string on a new line.
 *
 * str: inputed string.
 *
 * Return: no return.
 */

void puts2(char *str)
{
	int s = 0;

	while (s >= 0)
	{
		if (str[s] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
		s++;
	}
}
