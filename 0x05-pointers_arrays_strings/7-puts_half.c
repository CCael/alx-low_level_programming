#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void puts_half(char *str)

{
	int j = 0;
	int i, max;

	while (str[j] != '\0')
	{
		j++;
	}
	max = j;
	i = max / 2;

	while (i <= max)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
