#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 * @dest: function input
 * @src: function input
 * @n: function input
 *
 * Return: the new copied file
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
