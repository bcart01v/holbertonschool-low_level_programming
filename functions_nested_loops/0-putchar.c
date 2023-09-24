#include "main.h"

/**
 * main - Program beginning
 *
 * Return: return a 0 if theres no error!
 *
 * Description: prints out "_putchar"
 */

int main(void)
{
	char c[8] = "_putchar";

	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
