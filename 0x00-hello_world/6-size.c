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

	printf("Size of char: %d byte(s)", sizeof(s));

	printf("Size of int: %d byte(s)", sizeof(one));

	printf("Size of long: %d byte(s)", sizeof(not_so_long));

	printf("Size of long long: %d byte(s)", sizeof(so_long));

	printf("Size of float: %d byte(s)", sizeof(point));

	return (0);
}
