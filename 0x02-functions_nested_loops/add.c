#include "main.h"
#include <stddef.h>
/**
 * add - adds two integers
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: returns the result of a + b
 */

int add(int a, int b)
{
	int *p = &a;

	int *q = &b;

	int c[] = {*p, *q};

	int sum = 0;

	size_t size = sizeof(c) / sizeof(c[0]);

	int i;

	for (i = 0; i < (int) size; i++)
		sum +=  c[i];

	return (sum);

}
