#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function that prints anything.
 * @format: A list of argument types passed to the function
 * c:char, i: integer, f: float, s: char *.
 *
 * Description: The function prints anything as :char,
 * integer,float,s:char*.if string = NULL,
 * print (nil) instead.Ignor other char.
 */
void print_all(const char * const format, ...)
{
	/* list argumemts */
	va_list args;
	char *str;
	int i = 0;
	char current_char;
	int need_separator;
	
	/* initializing argument */
	va_start(args, format);
	
	need_separator = 0;
	/* Iterating through the  arguments */
	while (format && format[i])
	{
		current_char = format[i];
		
		/* Prints separator before argument except first one */
		if (need_separator && (current_char == 'c' || current_char == 'i' || current_char == 'f' || current_char == 's'))
		printf (", ");
		
		switch (current_char)
		{
			/* Prints based on format_char function */
			case 'c':
			printf("%c", va_arg(args, int));
			need_separator = 1;
			break;
			
			case 'i':
			printf("%d", va_arg(args, int));
			need_separator = 1;
			break;
			
			case 'f':
			printf("%f", va_arg(args, double));
			need_separator = 1;
			break;
			
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", va_arg(args, char *));
			need_separator = 1;
			break;
		}
		
		i++;
	}
	
	/* End argument list */
	va_end(args);
	
	printf("\n");
}
