#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: inpited string.
 * 
 * Return: no return.
 */

void puts_half(char *str)
{
	int n = 0, m;

	while (n >= 0)
	{
		if (str[n] == '\0')
			break;
		n++;
	}
	if (str[n] % 2 == 0)
		m = n / 2;
	else if (str[n] % 2 == 1)
		m = (n - 1) / 2;

	for (m++; m < n; m++)
		_putchar(str[m]);
	_putchar('\n');
}
