#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: point to the value stored in int a
 * @b: pointer to the value stored in int b
 *
 */

void swap_int(int *a, int *b)
{
	int c, d;

	int *p, *q;

	c = *a;
	d = *b;

	p = &c;
	q = &d;

	*b = *p;
	*a = *q;



}
