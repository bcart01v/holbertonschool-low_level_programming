#include "main.h"

/**
* print_diagsums - prints the sum of some diags
* @a: A pointer
* @size: the input
* BJC - 2023-10-06
*/

void print_diagsums(int *a, int size)
{
	int one, two, sum1 = 0, sum2 = 0;

	for (one = 0; one <= (size * size); one = one + size + 1)
		sum1 = sum1 + a[one];
	for (two = size - 1; two <=  (size * size) - size; two = two + size - 1)
		sum2 = sum2 + a[two];
	printf("%d, %d\n", sum1, sum2);
}
