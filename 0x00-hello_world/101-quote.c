#include <unistd.h>
/**
 * main - Entry point of the program
 * Description: This function prints a specific string to the standard error
 * using the write function. It then returns 1 to indicate an error status.
 * Return: Always returns 1 (Error)
 */
int main(void)
{ 
const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}	
