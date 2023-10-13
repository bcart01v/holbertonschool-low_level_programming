#include "main.h"

/**
 * factorial - Returns the factorial of the number passed
 * @n: The number we get the factorial for
 * Return - Do we need it? I don't know yet. Probably
 * BJC - 2023-10-13
*/

int factorial(int n)
{
	if (n != '\0')
	{
		if (n < 0)
		{
			return (-1);
		}
		if (n == 1)
		{
			return (1);
		}
		else
		{
			return (n);
		}
	factorial (n + 1);
	}
return (0);
}
