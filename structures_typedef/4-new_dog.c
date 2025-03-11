#include <stdlib.h>
#include "dog.h"

/*
 * File: source_4-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strlength - Calculates the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string (excluding the null terminator)
 */

int _strlength(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string to a newly allocated memory space
 * @dest: Destination for the copy
 * @src: Source string to copy
 *
 * Return: Pointer to the copied string
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for and copy the name */
	name_copy = malloc(_strlength(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcopy(name_copy, name);

	/* Allocate memory for and copy the owner */
	owner_copy = malloc(_strlength(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);

	/* Initialize the new dog's members */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
