#include <stdio.h>

/**
 * print_before_main - Function that prints specific message
 * before main function is executed.
 *
 * Description:_attribute_((constructor)): Makes sure function is called
 * before main function.
 */
void __attribute__ ((constructor)) print_before_main()
{
	/* Prints the message before main function */
	printf("You're beat! and yet, you must allow,\n");

	/* main function message */
	printf("I bore my house upon my back!\n");
}
