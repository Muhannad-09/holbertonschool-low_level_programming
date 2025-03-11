#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/*
 * File: source_2-file.c
 * Author: Muhannad Gsgs
 */

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: Prints the elements of the struct dog. If an element
 * is NULL, prints (nil) instead. If d is NULL, prints nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* Print name or (nil) if NULL */
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		/* Print age */
		printf("Age: %f\n", d->age);

		/* Print owner or (nil) if NULL */
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
