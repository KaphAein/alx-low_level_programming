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
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = strdup(name);
	if (d->name == null)
	{
		free(d->name);
		return (NULL);
	}
	d->age = age;
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->owner);
		return (NULL):
	return (d);
}
