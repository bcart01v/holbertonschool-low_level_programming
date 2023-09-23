#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
