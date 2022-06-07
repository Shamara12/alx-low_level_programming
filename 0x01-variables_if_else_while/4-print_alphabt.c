#include <stdio.h>

/**
 * main - prints all the letters of the alphabet except 'q' and 'e'.
 *
 * Always Return 0.
 */

int main(void)
	{
	char letters[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
	}
