#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using the function pointer.
 * @name: the name to print.
 * @f: the function pointer that will print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
