#include <stdio.h>

/**
 * main - Prints alphabet but backwards!
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
