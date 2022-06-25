#include "main.h"

/**
 * _strlen - prints the length of a string.
 *
 * @s: length of string.
 *
 *Return: returns string length.
 */

int _strlen(char *s) 
{
   int string = 0;
   
   while(*(s + string) != '\0')
      string++;
     
   return string;
}
