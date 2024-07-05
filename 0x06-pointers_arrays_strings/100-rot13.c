#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: returns pointer to the encoded string
 */

char *rot13(char *str)
{
/* pointer that iterates through string */
char *ptr = str;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
/* loop variable declaration */
int i;
/* iterates thro' each character in string */
while (*ptr != '\0')
 {
/* iterates through characters in alphabet */
for (i = 0; alphabet[i] != '\0'; i++)
   {
	if (*ptr == alphabet[i])
	{
/* Replaces char with corresponding ROT13 character */
	*ptr = rot13[i];
/* Exits loop once a replacement is made */
	break;
	}
   }
/* moves to next character */
ptr++;
 }
return (str);
}
