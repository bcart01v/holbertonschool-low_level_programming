#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - fuction that print name
 * @name:the character to be printed
 * @f:fuction pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
