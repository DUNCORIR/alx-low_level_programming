#include <ctype.h>
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words in string
 * @str: string to be modified
 *
 * This function that capitalizes all words of a string with
 * periods, exclamation marks, question marks, double quotes, parentheses,
 * spaces, tabs, newlines, commas, semicolons,curly braces, and spaces.
 *
 * Return: Apointer to the string modified
 */
 
char *cap_string(char *str)
{
/*pointer that iterates thro' string*/

char *ptr = str;
/*Flag to chaeck if we are at the beginning*/
bool new_word = true;
/*iterates throu each character in string*/
while (*ptr != '\0')
{
if (new_word && isalpha(*ptr))
{
/*capitalize first letter of the word*/

*ptr = toupper(*ptr);
/*resets flag as we are now in middle of a word.*/
}
else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
	*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}') 
{
/*sets flag as the next character may be start of a new word*/
new_word = true;
}
/*move to next character*/
ptr++;
}
return (str);
}
