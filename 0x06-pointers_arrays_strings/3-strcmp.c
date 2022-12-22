#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a postive interger if s1 is greater than s2,
 * a negative integer if s1 is less than s2, and a zero if s1 is equal to s2.
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);

	return (res);


}
