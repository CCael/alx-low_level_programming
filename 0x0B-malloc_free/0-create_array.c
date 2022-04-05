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
	unsigned int a;
	char *arr;

	arr + (char*) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	if (size != 0)
	{
		for (a = 0; a < size; a++)
		{
			*(arr + a) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}

