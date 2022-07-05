#include "main.h"

/**
 * print_number - this function prints an integer.
 *
 * @n: inputed integer
 *
 * Return: no return.
 */

void print_number(int n)
{
	while (n >= 48 && n <= 57)
	{
		_putchar(n);
	}
	_putchar('\n');
}
