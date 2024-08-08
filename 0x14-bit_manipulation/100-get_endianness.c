#include "main.h"

/**
 * get_endianness - Function that checks for endiannes.
 *
 * Description : the function checks for endiannes.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test;
	char *byte;

	test = 1;
	byte = (char *)&test;

	/* for first byte in memory 1,it is little endian */
	/* for first byte in memory 0,it ia big endian */
	return ((byte ? 1 : 0));
}

