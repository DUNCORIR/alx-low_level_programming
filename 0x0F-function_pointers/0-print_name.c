#include "function_pointers.h"
#include <string.h>
#include <stddef.h>

/**
 * print_name - function that prints a name.
 * @name: name to be printed.
 * @f:pointer to function that accepts char
 * Return: Nothing
 */ 
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		/* calls the function f,give name as argument */
		f(name);
	}
}
