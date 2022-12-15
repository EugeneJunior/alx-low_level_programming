#include <ctype.h>
#include "main.h"

/**
 * _islower - logs 9 times table to stdout
 * @c: integer parameter
 *
 * Return: retuns 1 if is alphabet and 0 otherwise
 *
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);


}
