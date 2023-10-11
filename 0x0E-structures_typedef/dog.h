#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - entry point
 * my_dog - struct with elements
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: my dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog my_dog(char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	return (my_dog);
}
#endif /* MAIN_H */
