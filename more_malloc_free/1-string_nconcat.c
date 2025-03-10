#include "main.h"
#include <stdlib.h>

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to include.
 *
 * Return: Pointer to the newly allocated memory containing s1,
 *         followed by the first n bytes of s2, null-terminated.
 *         If malloc fails, returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1 = 0, len2 = 0;

    /* Treat NULL as empty strings */
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

    /* If n is greater than or equal to length of s2, use the whole string */
	if (n >= len2)
		n = len2;

    /* Allocate memory for the concatenated string */
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

    /* Copy s1 into result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

    /* Copy the first n bytes of s2 into result */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
