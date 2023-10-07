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
	char *diddlydoo;
	int firstcount, secondcount;

	for (firstcount = 0; haystack[firstcount] != '\0'; firstcount++)
	{
		for (secondcount = 0; needle[secondcount] != '\0'; secondcount++)
		{
			if (haystack[firstcount] <= needle[secondcount])
			{
				diddlydoo = &needle[secondcount];
				return (diddlydoo);
			}
		}
	}
	return (0);
}
