#include "main.h"
#include <stdlib.h>

/*
 * File: source_101-file.c
 * Author: Muhannad Gsgs
 */

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */

int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
			count++;
		i++;
	}
	return (count);
}

/**
 * get_word_length - Gets the length of the next word in a string.
 * @str: The input string.
 *
 * Return: The length of the next word.
 */

int get_word_length(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}

/**
 * allocate_word - Allocates memory and copies a word from the string.
 * @str: The input string.
 * @word_len: The length of the word to copy.
 *
 * Return: Pointer to the newly allocated word.
 */

char *allocate_word(char *str, int word_len)
{
	char *word = malloc((word_len + 1) * sizeof(char));
	int i;

	if (word == NULL)
		return (NULL);

	for (i = 0; i < word_len; i++)
		word[i] = str[i];
	word[word_len] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, word_index = 0, word_len = 0, word_count_total;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count_total = word_count(str);
	if (word_count_total == 0)
		return (NULL);

	words = malloc((word_count_total + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str != '\0')
		{
			word_len = get_word_length(str);
			words[word_index] = allocate_word(str, word_len);
			if (words[word_index] == NULL)
			{
				for (i = 0; i < word_index; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			word_index++;
			str += word_len;
		}
	}
	words[word_index] = NULL;

	return (words);
}
