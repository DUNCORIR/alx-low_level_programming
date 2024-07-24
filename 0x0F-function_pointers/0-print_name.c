#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: The name to be printed.
 * @f: Pointer to a function that accepts char*.
 * 
 * Description: Calls the function pointed to by @f, giving @name
 * as the argument. If either @name or @f is NULL, nothing happens.
 */ 
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		/* calls the function f and gives name as argument */
		f(name);
	}
}
