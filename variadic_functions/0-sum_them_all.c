#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * 
 * 
*/

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int x;
	int sum;
	
	if (n == 0)
	{
		return (0);
	}

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
    {
        x = va_arg(args, const unsigned int);
        if (x == NULL)
        {
         return (0);
        }
        sum += x;
    }
	va_end(args);
	return (x);
}

