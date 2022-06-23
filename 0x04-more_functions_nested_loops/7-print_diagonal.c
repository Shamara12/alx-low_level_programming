#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times '\' is printed on the terminal.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, spc;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spc = 0; spc < i; spc++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
}
