#include "main.h"

/**
 * _isalpha - returns 1 if letter else, returns 0.
 * @c: stands for uppercase or lowercase letter.
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int c;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar ('\n'\);
}
