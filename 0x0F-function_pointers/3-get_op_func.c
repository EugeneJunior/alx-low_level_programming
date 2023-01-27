#include "3-calc.h"
/**
 * get_op_func - pointer to a function
 * @s: the operater entered by the user
 *
 * Return: return a suitable pointer to a function
 * if it matches a paticular operator, otherwise 
 * returns NULL
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

	int i;
	
	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		++i;
	}

	return (NULL);
}
