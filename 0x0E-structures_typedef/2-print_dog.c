#include "dog.h"
#include <stdio.h>

/**
* print_dog - print members of dog struct
* @d: pointer to dog struct
*/
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? nil : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? nil : d->owner);
}
