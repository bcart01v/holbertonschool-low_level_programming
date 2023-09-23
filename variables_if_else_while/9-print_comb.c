#include <stdio.h>

/**
 * main - Prints numbers of base 10 with commas and spaces
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
