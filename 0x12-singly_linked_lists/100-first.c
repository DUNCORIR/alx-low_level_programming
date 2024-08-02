#include <stdio.h>

/* Is a function that prints the required message */
void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore mu house upon my back!\n");
}
