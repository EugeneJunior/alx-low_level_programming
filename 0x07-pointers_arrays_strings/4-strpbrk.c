#include "main.h"
#include <string.h>
/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string containing bytes of accept
 * @accept: bytes to be located in s
 *
 * Return: Returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *m = strpbrk(s, accept);

	return (m);
}
