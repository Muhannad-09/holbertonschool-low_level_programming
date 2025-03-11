#include <stdlib.h>
#include "dog.h"

/*
 * File: source_5-file.c
 * Author: Muhannad Gsgs
 */

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to free
 *
 * Description: Frees the allocated memory for the name, owner,
 * and the structure itself.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);  /* Free memory for the name */
		free(d->owner); /* Free memory for the owner */
		free(d);        /* Free the structure itself */
	}
}
