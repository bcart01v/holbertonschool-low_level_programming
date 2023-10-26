#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func- get thefunctions
 * @s:pointer
 * Return:NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && s[i] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("error\n");
	exit(99);
	return (NULL);
}
