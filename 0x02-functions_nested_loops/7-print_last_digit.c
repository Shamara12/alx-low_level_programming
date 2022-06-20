#include "main.h"

/**
 * print_last_digit - returns the value of the last digit.
 * @i: number entered.
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return(-n);
	}
	else
	{
		_putchar(n + 48);
		return(n);
	}
}
