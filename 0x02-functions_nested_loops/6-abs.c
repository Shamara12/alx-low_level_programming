#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: inputed number.
 * Return: Always 0.
 */

int _abs(int i)
{
	if (i >= 0)
	{
		putchar(i);
	}
	else
	{
		putchar(i * -1);
	}
	return (0);
}
