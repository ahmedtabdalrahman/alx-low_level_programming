#include <unistd.h>

/**
 * main entry point
 *
 * description: prints to the standard error
 *
 * Return 1 (ERROR)
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, c, 59);
	return (1);
}
