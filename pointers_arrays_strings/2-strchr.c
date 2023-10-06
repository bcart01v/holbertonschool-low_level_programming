#include "main.h"

/**
* _strchr - locates a character in a string
* @s: String we are searching
* @c: The character we're looking for
* Return: A pointer to the first C
* BJC - 2023-10-06
*/


char *_strchr(char *s, char c)
{
	char *benisawesome = s;

	while (*benisawesome != '\0')
	{
	if (*benisawesome == c)
		{
		return (benisawesome);
		}
		benisawesome++;
	}
	if (*benisawesome == 0)
	{
		return (NULL);
	}
	return (0);
}
