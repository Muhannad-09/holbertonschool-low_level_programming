#include "dog.h"
#include <stddef.h>

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name to be assigned
 * @age: Age to be assigned
 * @owner: Pointer to the owner's name to be assigned
 *
 * Description: If the pointer `d` is not NULL, initializes
 * the members of the struct dog with the provided values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
