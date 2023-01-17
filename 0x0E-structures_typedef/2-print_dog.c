#include "dog.h"
#include <stddef.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	char *n, *o;

	float a;
	
	n = d->name;
	o = d->owner;
	a = d->age;
	if (n == NULL || o == NULL)
		printf("(nil)");
	if (d == NULL)
		printf("NULL");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", n, a, o);
}
