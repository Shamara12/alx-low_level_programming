#include "main.h"

/**
 * string_toupper - changes a string from 
 *		    lower case to uppercase.
 *
 * @str: pointer to inputed char
 *
 * Return: @str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] < 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
