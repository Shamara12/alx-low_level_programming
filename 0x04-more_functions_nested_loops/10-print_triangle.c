#include "main.h"

/**
 * print_triangle -prints a triangle, followed by a new line.
 *
 * @size: number of times the character '#' is printed.
 *
 * Return: Always 0. 
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 1; y < (size - x); y++)
				putchar(32);
			for (y--; y < size; y++)
				putchar(35);
			putchar('\n');
		}
	}
	putchar('\n');
}
