#include "main.h"
#include <stdlib.h>

/**
 * -calloc - ...
 *  @nmemb: number of members
 *  @size: size
 *
 *  Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(
