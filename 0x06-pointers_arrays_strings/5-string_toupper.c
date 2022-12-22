#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to string
 *
 * Return: returns a pointer to the string
 */

char *string_toupper(char *s)
{

	char lower[] = "abcdefghijklmnopqrstuvwxyz";

	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i, j;

	size_t sz_lower = strlen(lower);

	size_t sz_ = strlen(s);

	for (i = 0; i < (int) sz_lower && lower[i] != '\0'; i++)
	{
		for (j = 0; j < (int) sz_ && s[j] != '\0'; j++)
		{
			if (lower[i] == s[j])
			{
				s[j] = upper[i];
			}
		}
	}
	s[j] = '\0';
	return (s);


}
