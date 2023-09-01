#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @src: function input
 * @dest: function input
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int cnt = -1;

	do {
		cnt++;
		dest[cnt] = src[cnt];
	} while (src[cnt] != '\0');
	return (dest);
}
