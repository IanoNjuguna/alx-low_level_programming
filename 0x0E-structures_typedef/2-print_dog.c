#include "main.h"
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: block of memory struct is stored in
 *
 * Return: Success or Fail
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
	}
	else
		return;
}
