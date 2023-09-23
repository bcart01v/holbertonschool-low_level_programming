#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and then uppercase
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
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
