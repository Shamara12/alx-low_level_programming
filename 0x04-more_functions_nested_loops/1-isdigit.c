#include "main.h"

/**
 * _isdigit - returns 1 if parameter inputed is a digit else, returns 0.
 *
 * @c: digit entered
 *
 * Return: 1 for digits 0-9, 0 for others.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
