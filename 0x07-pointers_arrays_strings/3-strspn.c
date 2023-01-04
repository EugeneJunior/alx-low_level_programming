#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string from which accept is gotten
 * @accept: prefix length
 *
 * Return: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = strspn(s, accept);

	return (m);
}
