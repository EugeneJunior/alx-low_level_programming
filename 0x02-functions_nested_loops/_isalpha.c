#include <ctype.h>
#include "main.h"

/**
 * _isalpha - logs upper and lower case letters to stdout
 * @c: input parameter
 *
 * Return: return 1 if c is alpha and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}
