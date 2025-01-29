#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h> /* for size_t */
# include <stdio.h> /* for std input and output */

/* .....Function prototypes.... */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */