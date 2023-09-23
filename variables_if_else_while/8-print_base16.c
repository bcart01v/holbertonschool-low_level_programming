#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;
	char buffer[16];
	int index = 0;

	for (i = 48; i <= 57; i++)
	{
		buffer[index++] = (char)i;
	}
	for (i = 97; i <= 102; i++)
	{
		buffer[index++] = (char)i;
	}
	for (i = 0; i < index; i++)
	{
		putchar(buffer[i]);
	}

	putchar('\n');

	return (0);
	}
