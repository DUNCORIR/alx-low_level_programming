#include "main.h"

/**
 * leet - Encodes string into 1337
 * @str: String to be encoded
 *
 * Function replaces the following letters with 1337 equivalent
 * - 'a' and 'A' are replaced by '4'
 * - 'e' and 'E' are replaced by '3'
 * - 'o' and 'O' are replaced by '0'
 * - 't' and 'T' are replaced by '7'
 * - 'l' and 'L' are replaced by '1'
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
/* pointer that iterates thro' string */
char *ptr = str;
/* characters to be replaced */
char letters[] = "aAeEoOtTlL";
/* corresponding 1337 replacement */
char leet[] = "4433007711";
/* Iterates thro' each character to be replaced */
int i;
while (*ptr != '\0')

{
/* Iterates thro' characters to be replaced */
for (i = 0; letters[i] != '\0'; i++)
{

if (*ptr == letters[i])
{
/* Replaces character with corresponding 1337 character */
*ptr = leet[i];
/* Exit loop once a rep is made */
break;
}
}
/*increament,next character */
ptr++;
}
/* Returns encoded string */
return str;
}
