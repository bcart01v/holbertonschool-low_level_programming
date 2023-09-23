#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;

	for (i = 97; i <= 100; i++)
	{
		putchar(i);
	}
	for (i = 102; i <= 112; i++)
	{
		putchar(i);
	}
	for (i = 114; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
