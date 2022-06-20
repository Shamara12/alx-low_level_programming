#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

/**
 * print_last_digit - returns the value of the last digit.
 * @i: number entered.
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return(-n);
	}
	else
	{
		_putchar(n + 48);
		return(n);
	}
}
