#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that prints a struct dog
 * @name: element
 * @age: element
 * @owner: element
 * Return: NULL if function fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(dog_t))
	if (new_dog == NULL)
		return(NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (new_dog);
}
