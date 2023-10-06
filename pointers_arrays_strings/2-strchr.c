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
	int benisawesome;

	while (1)
	{
		benisawesome = *s++;
		if (benisawesome == c)
		{
			return (s - 1);
		}
			if (benisawesome == 0)
		{
			return (NULL);
		}
	}
}
