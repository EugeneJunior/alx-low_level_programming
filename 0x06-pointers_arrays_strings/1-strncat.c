#include "main.h"
#include <string.h>

/**
 * _strncat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @src: the source string
 * @dest: the destination string
 * @n: the number of bytes to append
 *
 * Return:Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	size_t size_dest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[(int) size_dest + i] = src[i];
	dest[(int) size_dest + i] = '\0';
	return (dest);

}
