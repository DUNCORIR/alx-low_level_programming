#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func -Selects correct functions to different operation
 * based on user requests.
 * @s: Operator passed as argument to the program.
 * Return: Pointer to the function corresponding to 
 * the operator as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	
	/* Array that Maps string of arithmetics operations. */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/* Iterates through array of structures */
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
