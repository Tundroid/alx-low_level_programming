#include "3-calc.h"

/**
* get_op_func - returns function for operation based on operator
* @s: operator string
*
* Return: pointer to operation function or null
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < (int)(sizeof(ops) / sizeof(op_t) - 1))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
