#include "main.h"

/**
* print_diagsums - prints the sum of some diags
* @a: A pointer
* @size: the input
* BJC - 2023-10-06
*/

void print_diagsums(int *a, int size)
{
	int first, second, sum1 = 0, sum2 = 0;

	for (first = 0; first <= (size * size); first = first + size + 1)
		sum1 = sum1 + a[first];
	for (second = size - 1; second <=  (size * size) - size; \
	 second = second + size - 1)
		sum2 = sum2 + a[second];
	printf("%d, %d\n", sum1, sum2);
}
