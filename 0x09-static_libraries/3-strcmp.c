#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 == s2, else, other number.
 */

int _strcmp(char *s1, char *s2)
{
	int input = 0, output = 0;

	while (output == 0)
	{
		if ((*(s1 + input) == '\0') && (*(s2 + input) == '\0'))
			break;

		output = *(s1 + input) - *(s2 + input);
		input++;
	}

	return (output);
}
