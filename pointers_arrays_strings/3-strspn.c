#include "main.h"

/**
* _strspn - gets length of a prefix substring
* @s: the string we're checking
* @accept: what were comparing too
* Return: The number bytes
* BJC - 2023-10-06
*/

unsigned int _strspn(char *s, char *accept)
{
	int countywounty = 0;

	for (; *s != '\0'; s++)
	{
		char *tempcheck = accept;
		int found = 0;

		for (; *tempcheck != '\0'; tempcheck++)
		{
			if (*s == *tempcheck)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			countywounty++;
		}
		else
		{
		break;
		}
	}
return (countywounty);
}
