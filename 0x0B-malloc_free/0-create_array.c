#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of array
 *@c: character to be initialized
 *
 *Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	return (p);
}
