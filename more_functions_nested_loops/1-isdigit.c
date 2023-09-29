#include "main.h"
/**
 * _isdigit - checks if what is passed is a digit
 * @x: character to check
 * return: 1 if it is, 0 if it is not
 * BJC - 20230929
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
