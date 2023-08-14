#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * 
 * @dog: the struct that will print
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
