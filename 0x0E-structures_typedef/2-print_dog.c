#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: pointer to the dog structure
 *
 * Description: The function will print the details of a struct dog.
 * If an element of d is NULL, print (nil) instead of this element.
 *  (if name is NULL, print Name: (nil)).
 *  If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
        {
                return;
        }


	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.1f\n", d->age);

	if (d->owner == NULL)

	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
