#include "main.h"

/**
 * _islower - prints 1 for lowercase and 0 for uppercase alphabets.
 * @c: stands for the letter in ASCII code.
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
