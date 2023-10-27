#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * Notes and stuff
 * 
 * 
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start (args, n);
		char *joined_numbers = NULL;
		va_list copy_args;
		va_copy(copy_args, args);

		joined_numbers = va_join(separator, copy_args);
		printf("$s", joined_numbers);

		free(joined_numbers);
	va_end(args);
	printf("\n");
}
