#include "main.h"

/*
 * File - 9-strcpy.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 * @dest: pointer to the buffer where the string is copied
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
