#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/** print_name - Prints a name using a function pointer.
 * @name: Name to be printed.
 * @f: Pointer to a function that takes a char * as argument.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array.
 * @size: Size of the array
 * @action: pointer to the function needed to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index -Function that serches for an integer.
 * @cmp:pointer to the function to be used to compare values
 * @size: the number of elements in the array 'array'
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTION_POINTERS_H */
