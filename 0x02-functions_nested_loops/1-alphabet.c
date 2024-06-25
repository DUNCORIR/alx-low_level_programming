#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints all the lowercase letters of the alphabet
 * using the _putchar function, and then prints a newline character.
 */

void print_alphabet(void)

{

char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

int i;

for (i = 0; alphabet[i] != '\0'; i++)


{

_putchar(alphabet[i]);

}
}
