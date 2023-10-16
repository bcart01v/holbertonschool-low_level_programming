#include "main.h"
/**
* _isdigit - Check if a character is a digit
* @x: The character to check
*
* Return: 1 if the character is a digit, 0 otherwise.
*/

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
		return (0);
}
