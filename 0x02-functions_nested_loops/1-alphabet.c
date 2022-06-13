#include "main.h"

/**
 * main - prints all the letters of the alphabet in lowercase.
 * Return: Always 0.
 */

void print_alphabet(void);
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
