#include "main.h"

/**
 * _strncpy - copies a string from src to dest.
 *
 * @src: source
 * @dest:destination
 * @n: number of bytes used from src.
 *
 * Return: returns pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
