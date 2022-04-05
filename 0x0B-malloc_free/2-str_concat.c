#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strs
 * @s1: str 1
 * @s2: str 2
 * Return: pointer to memory with concatenated str
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1, len2;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	p = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (p == NULL)
		return (NULL);

	for (len1 = 0, len2 = 0; len1 < (i + j + 1); len1++)
	{
		if (len1 < i)
			p[len1] = s1[len1];
		else
			p[len1] = s2[len2++];
	}

	return (p);
}
