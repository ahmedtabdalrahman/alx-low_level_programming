#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar Prints the character
 *
 * Return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
