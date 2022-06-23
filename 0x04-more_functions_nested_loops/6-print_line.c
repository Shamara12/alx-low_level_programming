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

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
