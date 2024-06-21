#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by
 * a new line. It uses a loop to iterate through the ASCII values of the
 * lowercase alphabet and prints each character using the putchar function.
 * The program only uses putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char letter;
for (letter = 'a'; letter <= 'z'; letter++)

{

putchar(letter);

}
putchar('\n');
return (0);

}
