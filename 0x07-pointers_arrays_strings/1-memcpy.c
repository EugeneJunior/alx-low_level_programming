#include "main.h"
#include <string.h>
/**
 * _memcpy - function copies n bytes of the memory area src
 * to memory area dest
 * @dest: destination of string from src
 * @src: source of string dest
 * @n: constant by of memory to fill
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *m = memcpy(dest, src, n);

	return (m);
}
