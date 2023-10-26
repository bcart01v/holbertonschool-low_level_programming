#include "3-calc.h"
/**
 * main - this the starting point for arithmeti operation
 * @argc:interger rep
 * @argv:array of pointer
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	int num1;
	int num2;
	char operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	op_func = get_op_func(operator);


	if (op_func == NULL)
	{
		printf("error\n");
		exit(99);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);
	return (0);
}
