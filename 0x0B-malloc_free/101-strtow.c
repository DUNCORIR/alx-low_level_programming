#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits string into words
 * @s: string to be split
 * @str: pointer to array returned.
 * Return: Null if str == NULL or str == ""
 *
 */
char **strtow(char *str)
{	
	int num_words;
	int word_index;
	int in_word;
	char *start;
	int i;
	int length;
	int j;
	char **words;

	/* checks NULL or empty strings */
	if ((str == NULL || *str == '\0'))
		return (NULL);
	/* Counts number of words */
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	
	/* Allocates memory for word array */
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	in_word = 0;
	start = NULL;
	
	/* iterates through string to extarct words */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			start = &str[i];
		}
		else if ((str[i] == ' ' || str[i + 1] == '\0') && in_word == 1)
		{
			in_word = 0;
			length = (str[i + 1] == '\0') ? &str[i + 1] - start : &str[i] - start;
			words[word_index] = malloc((length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
			/* Frees previously allocated mem on failure */
				for (j = 0; j < word_index; j++)
					free(words[j]);
				 free(words);
				 return (NULL);
			}
			/* copies word to allocated memeory */
			strncpy(words[word_index], start, length);
			words[word_index][length] = '\0';
			word_index++;
		}
	}
	words[word_index] = NULL;
	return (words);
	
}

/**
 * count_words - Counts number of words in string
 * @str: String to count words
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count;
	int in_word;


	while (*str)
	{
		count = 0;
		in_word = 0;

		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}
