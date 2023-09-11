#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 *
 * @d: a  pointer to a structure of type dog
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
