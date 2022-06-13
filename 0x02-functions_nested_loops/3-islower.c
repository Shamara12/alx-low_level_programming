#include "main.h"

/**
 * _islower - prints 1 for uppercase and 0 for lowercase.
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar ('\n');
}
