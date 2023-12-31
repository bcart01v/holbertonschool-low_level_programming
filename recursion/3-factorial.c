#include "main.h"

/**
 * factorial - Returns the factorial of the number passed
 * @n: The number we get the factorial for
 * Return: Returns the value
 * BJC - 2023-10-13
*/

int factorial(int n)
	{
		if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	}
