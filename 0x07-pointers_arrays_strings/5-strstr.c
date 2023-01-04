#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string from which bytes in needle occur
 * @needle: bytes to be chacked for occurence in c
 *
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *m = strstr(haystack, needle);

	return (m);
}
