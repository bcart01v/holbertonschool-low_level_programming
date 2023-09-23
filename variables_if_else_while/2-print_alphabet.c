#include <stdio.h>

/**
 * main - function that prints alphabet
 * Return: Should return 0 pending no errors
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
			putchar(i);
			putchar('\n');
	}
	return (0);
}
