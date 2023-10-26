#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - starting of addition
 * @a:the first number in operation
 * @b:the second number in operation
 * Return:the operation of num1 and num2
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub-two integers and returns the result.
 *
 * @a:The first integer.
 * @b:The second integer.
 * Return:The result of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-two integers and returns the result.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return:The result of a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-two integers and returns the result. If the divisor is zero,error
 *
 * @a:The dividend.
 * @b:The divisor.
 * Return:The result of a / b, or an error code for division by zero.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERRor\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod-Calculates the remainder of the division of two integers.
 *
 * @a:The dividend.
 * @b:The divisor.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERRor\n");
		exit(100);
	}
	return (a % b);
}
