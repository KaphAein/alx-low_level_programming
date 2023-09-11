#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: element
 * @name: element
 * @age: element
 * @owner: element
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d.name = name;
	d.age = age;
	d.owner = owner;
}
