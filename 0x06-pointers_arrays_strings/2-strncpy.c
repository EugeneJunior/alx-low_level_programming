#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n bytes of string from src to dest
 * @src: the source string
 * @dest: the destination string
 * @n: the number of bytes to copy
 *
 * Return: return a pointer to the resulting string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);



}
