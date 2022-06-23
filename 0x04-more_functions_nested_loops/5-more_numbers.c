#include "main.h"

/**
 * more_numbers - prints 0-14, 10 times.
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				putchar((y / 10) + 48);
			putchar((y % 10) + 48);
		}
		putchar('\n');
	}
}
