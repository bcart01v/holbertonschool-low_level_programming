#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character.
 * Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
    /* Check if value of 'c' is within the range of lowercase letters*/

	return (c >= 97 && c <= 122);
}
