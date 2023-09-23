#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Return: Should return 0 pending no errors
 */
int main(void)
{
	int i;
	char buffer[24];
	int index = 0;

	for (i = 97; i <= 100; i++)
	{
		buffer[index++] = (char)i;
	}
	for (i = 102; i <= 112; i++)
	{
		buffer[index++] = (char)i;
	}
	for (i = 114; i <= 122; i++)
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
