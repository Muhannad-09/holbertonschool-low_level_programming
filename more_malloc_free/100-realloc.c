#include "main.h"
#include <stdlib.h>

/*
 * File: source_100-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size (in bytes) of the allocated space for ptr.
 * @new_size: The new size (in bytes) of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 *         NULL if new_size == 0 and ptr is not NULL, or if malloc fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

    /* If new_size is equal to old_size, return the same pointer */
	if (new_size == old_size)
		return (ptr);

    /* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	return (new_ptr);
	}

    /* If new_size is 0 and ptr is not NULL, free memory and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

    /* Allocate new memory */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

    /* Copy the contents from old memory block to new memory block */
	old_ptr = (char *)ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

    /* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
