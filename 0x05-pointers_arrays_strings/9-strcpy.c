#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @src: inputed string pointed to.
 * @dest: destination string is copied to.
 *
 * Return: the pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}
