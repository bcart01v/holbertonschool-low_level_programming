#include "3-calc.h"

/**
 * op_add - Adds 2 things together
 * Return: Result
*/

int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

int op_sub(int a, int b)
{
	int sum;

	sum = (a - b);
	return (sum);
}

int op_mul(int a, int b)
{
	int sum;

	sum = (a * b);
	return (sum);
}

int op_div (int a, int b)
{
	int sum;

	sum = (a / b);
	return (sum);
}

int op_mod(int a, int b)
{
	int sum;

	sum = (a % b);
	return (sum);
}
