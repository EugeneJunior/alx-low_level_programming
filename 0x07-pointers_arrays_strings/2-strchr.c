#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in string
 * to memory area dest
 * @s: string from which character will be returned
 * @c: character to be returned
 *
 * Return: Returns a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *m = strchr(s, c);

	return (m);
}
