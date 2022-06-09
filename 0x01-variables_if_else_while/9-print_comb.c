#include <stdio.h>

/**
 * main - print 0-9 with spaces and commas.
 *
 * Return: Always 0
 */

int main(void)
	{
		int i;
		
		for (i = 48; i < 58; i++)
		{
			putchar(i);
			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
