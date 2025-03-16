#include "3-calc.h"
#include <stddef.h>  /* Include to define NULL */

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator
 *
 * Return: a pointer to the function that corresponds to the operator
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

	/* Check for invalid operator length */
	if (s[1] != '\0')
	{
		return (NULL);  /* If there are multiple characters, it's an invalid operator */
	}

	/* Find the operator */
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return
