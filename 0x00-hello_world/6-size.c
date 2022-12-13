#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s = 'A';

	int one = 1;

	long not_so_long = 1.3E09;

	long long so_long  = 2.5E10;

	float point = 783.678;

	printf("Size of a char: %d byte(s)\n", sizeof(s));

	printf("Size of an int: %d byte(s)\n", sizeof(one));

	printf("Size of a long int: %d byte(s)\n", sizeof(not_so_long));

	printf("Size of a long long int: %d byte(s)\n", sizeof(so_long));

	printf("Size of a float: %d byte(s)\n", sizeof(point));

	return (0);
}
