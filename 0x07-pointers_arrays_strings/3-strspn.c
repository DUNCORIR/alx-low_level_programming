#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *  @s: The string to be scanned.
 *  @accept: The string containing the characters to match.
 *
 *  Return: The number of bytes in the initial segment of s
 *  which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int count = 0;
  char *a;

  /* iterates throu' each char in s */
  while (*s)
	  
  {
    /* Iterates thro' each char in accept */
    for (a = accept; *a; a++)
      {
        /* Checks if current char in s matches any in accept */
	if (*s == *a)
	{
	    count++;
            break;
        }
      }
      /* if no match is found in accept it stops counting */
      if (*a == '\0')
      {
        break;
      }
      s++;
  }
   return (count);
}
