#include <string.h>

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
		return;
	return (_putchar(s) + _putchar(s + 1));
}
