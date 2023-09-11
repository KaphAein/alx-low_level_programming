#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: element
 * Return: void
 */

void print_dog(struct dog *d)
{
	d = malloc(sixeof(struct dog));
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == NULL)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n" d->owner);
	}
}
