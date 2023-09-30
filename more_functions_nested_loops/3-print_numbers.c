#include <unistd.h>
#include "main.h"
/**
 * print_numbers - prints from 0 to 9
 *
 * Return: none
 */
void print_numbers(void)
{
	int num;
	int _putchar(int c);
	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');

}
