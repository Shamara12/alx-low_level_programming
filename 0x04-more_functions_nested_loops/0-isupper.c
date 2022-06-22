#include "main.h"

/**
 * _isupper - returns 1 if uppercase, returns 0 for lowercase.
 *
 * @c: uppercase or lowercase character.
 *
 * Return: 1 if uppercase and 0 if lowercase.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
