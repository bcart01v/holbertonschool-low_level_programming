#include "main.h"

/**
* _strchr
* @s: First Character
* @c: Second Character
* BJC - 2023-10-06
*/


char *_strchr(char *s, char c)
{
	char *benisawesome = s;
	while (*benisawesome != '\0')
	{
	if (*benisawesome == c)
		{
		printf("%s\n", benisawesome);
		}
		benisawesome++;
	}
	return(0);
}
