#include "main.h"
#include <string.h>

/**
 * _strcat -This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest:the destination string
 * @src:the source string
 *
 * Return:returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	size_t size_dest = strlen(dest);

	size_t size_src = strlen(src);

	int i;

	for (i = 0; i < (int) size_src && src[i] != '\0'; i++)

		dest[(int) size_dest + i] = src[i];

	dest[(int) size_dest + i + 1] = '\0';

	return (dest);
}
