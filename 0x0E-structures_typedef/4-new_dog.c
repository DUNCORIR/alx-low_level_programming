#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: Is the name of dog
 * @age: is the age of dog
 * @owner: is the name of owner.
 *
 * Description: The function creates structure for a new dog,
 * initializes all its members,then stores copies of name 
 * and owner.If function fails,returns NULL.
 *
 * Return: Pointer to new dog,or NULL on function fail.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy = NULL;
	char *owner_copy = NULL;
	
	/* first allocate memory for new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	
	/* Allocates memory for the name copy */
	if (name != NULL)
	{
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free (new_dog);
		return (NULL);
	}
		strcpy(name_copy, name);
	}
	
	/* Allocates memory for owner copy */
	if (owner != NULL)
	{
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
		strcpy(owner_copy, owner);
	}
	
	/*strcpy(owner_copy,owner);*/
	/* Then initializes new dog's name */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	
	return (new_dog);
}
