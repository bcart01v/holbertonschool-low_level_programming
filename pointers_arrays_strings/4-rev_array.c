#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: function parameter
 * @n: function parameter
 * BJC - 2023-10-08
 */

void reverse_array(int *a, int n)
{
	int count;
	int count2;

	for (count = 0; count < n / 2; count++)
	{
		count2 = a[count];
		a[count] = a[n - 1 - count];
		a[n - 1 - count] = count2;
	}
}
