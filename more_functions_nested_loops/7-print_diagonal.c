#include "main.h"

/**
* print_diagonal - were printing a diagonal line
* @n - the unput were getting to print to
* bjc - 2023-10-01
*/

void print_diagonal(int n)
{
	if (n <= 0) {
		_putchar('\n');
	} else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) {
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
