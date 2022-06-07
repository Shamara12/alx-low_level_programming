#include <stdio.h>

/**
 * main - prints letters of the alphabet not 'q' and 'e'.
 *
 * Return: Always 0.
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
