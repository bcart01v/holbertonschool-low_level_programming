#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the length of the string passed
* @s: the string we are evaluating
* Return: The length of the string
* BJC - 2023-10-02
*/

int _strlen(char *s)
{
	int string = 0;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	return (string);
}
