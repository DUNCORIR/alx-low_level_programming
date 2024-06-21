#include <stdio.h>

int main(void)
/**
 * main - Entry point of the program
 * Description: This program prints the alphabet in lowercase, followed by
 * a new line. It uses a loop to iterate through the ASCII values of the
 * lowercase alphabet and prints each character using the putchar function.
 * The program only uses putchar twice.
 * Return: Always 0 (Success)
 */
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);

}
putchar('\n');

return (0);

}
