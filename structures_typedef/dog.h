#ifndef DOG_H
#define DOG_H

/*
 * File: source_0-file.c
 * Author: Muhannad Gsgs
 */

/**
 * struct dog - A new type describing a dog
 * @name: Name of the dog (type char *)
 * @age: Age of the dog (type float)
 * @owner: Owner of the dog (type char *)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
