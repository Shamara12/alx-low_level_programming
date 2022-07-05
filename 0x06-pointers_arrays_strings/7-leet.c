#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: pointer to inputed string.
 *
 * Return: @str
 */

char *leet(char *str)
{
	int a, b = 0;
	int cpl[] = {65, 69, 76, 79, 84};
	int sml[] = {97, 101, 108, 111, 116};
	int rep[] = {52, 51, 49, 48, 55};

	while (str[b] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (str[b] == cpl[a] || str[b] == sml[a])
			{
				str[b] = rep[a];
				break;
			}
		}
		b++;
	}
	return (str);
}
