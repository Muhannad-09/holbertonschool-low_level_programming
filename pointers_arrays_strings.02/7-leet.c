#include "main.h"

/*
 * File: source_7-file.c
 * Author: Muhannad Gsgs
 */

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}

	return (str);
}
