#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: points to the dog to be free
 *
 * Description: The function frees memory allocated for a dog
 * structure,its name and owner.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	/* frees name,owner strings if memory allocated */
	if (d->name != NULL)
		free(d->name);
	
	if (d->owner != NULL)
		free(d->owner);
	
	/* freeing the dog structure */
	free(d);
}
