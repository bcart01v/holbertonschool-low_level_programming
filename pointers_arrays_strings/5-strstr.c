#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: The string we're searching
* @needle: the thing we're looking for
* Return: The results
* BJC - 2023-10-06 
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
