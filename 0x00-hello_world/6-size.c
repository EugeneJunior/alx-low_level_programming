#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */

int main(void)
{
	char s = 'A';
	int one = 1;
	long not_so_long = 1.3E09;
	long long so_long  = 2.5E10;
	float point = 783.678;
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n", sizeof(s), sizeof(one), sizeof(not_so_long), sizeof(so_long), sizeof(point));
	return (0);
}
