#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: function parameter
 * @s2: function parameter
 * BJC - 2023-10-08
 * Return: s1, s2
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			if (s1[count] < s2[count])
				return (s1[count] - s2[count]);
			else if (s2[count] < s1[count])
				return (s1[count] - s2[count]);
		}
	}
	return (0);
}
