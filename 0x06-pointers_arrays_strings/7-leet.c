#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to be encoded
 *
 * Return: returns a string encoded in to 1337
 */

char *leet(char *s)
{
	char up_l[] = "AEOTL";

	char lo_l[] = "aeotl";

	char *lee_ = "43071";

	int i, j;

	size_t sz_lo_l = strlen(lo_l);

	size_t sz_ = strlen(s);

	for (i = 0; i < (int) sz_; i++)
	{
		for (j = 0; j < (int) sz_lo_l; j++)
		{
			if (s[i] == lo_l[j] || s[i] == up_l[j])
			{
				s[i] = lee_[j];
			}
		}
	}
	s[i] = '\0';
	return (s);


}
