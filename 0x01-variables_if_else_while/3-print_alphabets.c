#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase and then
 * in uppercase, each followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main()
{
char letter;

for (char letter = 'a'; letter <= 'z'; letter++)
{

putchar(letter);

}
for (char letter = 'A'; letter <= 'Z'; letter++)

{

putchar(letter);

}

putchar('\n');
return (0);
}
