#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: an array of integers.
 * @n: number of elements in the array.
 *
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int temp, b, c;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		b++;
		c--;
	}
}
