#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory allocated to dog struct
* @d: pointer to dog struct
*/
void free_dog(struct dog *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
