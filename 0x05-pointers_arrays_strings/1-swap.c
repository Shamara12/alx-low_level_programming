#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first inputed integer.
 * @b: second inputed integer.
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
