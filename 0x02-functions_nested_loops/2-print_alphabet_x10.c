#include "main.h"

/**
 * print_alphabet_x10 - prints lowercse letters of the alphabet, 10 times.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y < 123; y++)
		{
			putchar(y);
		}
	putchar('\n');
	}
}
