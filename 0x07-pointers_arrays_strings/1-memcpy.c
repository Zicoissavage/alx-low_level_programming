#include "main.h"

/**
 * _memcpy - copies momory area
 * @dest: destination location
 * @src: source location
 * @n: number of bytes to copy
 * Retuen: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
