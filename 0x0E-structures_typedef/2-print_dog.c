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
	if (name == NULL)
		printf("Name: (nil)");
	if (age == NULL)
		printf("Age: (nil)");
	if (owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", d.name->name);
		printf("Age: %d\n", d.age->age);
		printf("Owner: %s\n" d.owner->owner);
	}
}
