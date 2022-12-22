#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: pointer to the string to be reversed
 * @n: the number of elements of the array
 */


void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i - 1];
	}


}
