#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Structure is used to store information about a dog.
 * it is for record purposes.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *  typedef - a typedef for struct dog to dog_t
 * dog_t - new name for struct dog 
 */
typedef struct dog dog_t;

/**
 * init_dog - Function that initializes dog structure.
 * @d: points to structure of dog
 * @age: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: The function takes pointer to a struct dog,
 * initializes its members with provided values then assigns
 * name, age, and owner to members of struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: The function prints the details of a struct dog. If
 * any member of the struct is NULL, it prints (nil) instead of the
 * member's value. If the pointer to the struct dog is NULL, it does
 * nothing.
 */

void print_dog(struct dog *d);

/**
 * new_dog - function creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner:is the owner of dog
 *
 * Description: The function creates a new dog,initializes its
 * members with given values then stores copies of name and owner.
 * if function fails,it returns NULL.
 *
 * Return: A pointer to the dog and NULL if it fails.
 */ 
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Function function that frees dogs.
 * @age: age of dog
 * @name: name of dog
 * @owner:is the owner of dog
 * 
 * Description: The function frees the dog.
 */

void free_dog(dog_t *d);

#endif /* DOG_H */
