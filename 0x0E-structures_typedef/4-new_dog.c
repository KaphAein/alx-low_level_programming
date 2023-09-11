#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function
 * @str: element
 * Return: char or NULL
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0, size;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	size = i + 1;

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	a[i] = '\0';
	return (a);
}

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
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
