#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @src: first string.
 * @dest: second string; result is sent here as well.
 *
 * Return: returns to dest.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a++] = src[b];
	return (dest);
}
