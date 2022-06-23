#include "main.h"

/**
 * print_line - prints a straight line for n times.
 *
 * @n: number of times line is printed.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
			putchar(95);
		putchar('\n');
	}
}
