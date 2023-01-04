#include "main.h"
#include <string.h>
/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: used to fill memory area pointer to by s
 * @n: constant by of memory to fill
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *m = memset(s, b, n);

	return (m);
}
