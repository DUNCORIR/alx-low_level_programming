0x0F. C - Function pointers

0.Function that prints a name.
void print_name(char *name, void (*f)(char *));

1.Function that executes a function given as a parameter on each element of an array.void array_iterator(int *array, size_t size, void (*action)(int));

2.Function that searches for an integer.
int int_index(int *array, int size, int (*cmp)(int));

3.Frogram that performs simple operations.

