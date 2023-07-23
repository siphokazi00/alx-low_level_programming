#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog and contains its name,
 * age, and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
