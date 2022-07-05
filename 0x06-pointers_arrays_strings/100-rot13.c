#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: pointer to inputed string.
 *
 * Return: returns @str
 */

char *rot13(char *str)
{
	int a, b = 0;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[b] != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (str[b] == letter[a])
			{
				str[b] = rot13[a];
				break;
			}
		}
		b++;
	}
	return (str);
}
