#include "main.h"

/**
* _strpbrk - Searches a string
* @s: The String we are searching
* @accept: The string we're comparing it too
* Return: The results of the compairison
* BJC - 2023-10-06
*/

char *_strpbrk(char *s, char *accept)
{
	int firstcount, secondcount;
	char *diddlydoo;

	for (firstcount = 0; s[firstcount] != '\0'; firstcount++)
	{
		for (secondcount = 0; accept[secondcount] != '\0'; secondcount++)
		{
			if (accept[secondcount] == s[firstcount])
			{
				diddlydoo = &s[firstcount];
				return (diddlydoo);
			}
		}
	}
return (0);
}
