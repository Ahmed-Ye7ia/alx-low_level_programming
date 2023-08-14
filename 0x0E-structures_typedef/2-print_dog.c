#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 *
 * @d: the struct that will print
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
