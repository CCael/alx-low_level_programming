#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int prev = 0;

	i = 0;
	while (i < size * size)
	{
		if (i == 0)
		{
		sum1 += a[i];
		prev = i;
		}

		i++;
	}
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (size * (i + j) - (i + 1)));
	}
	printf("%i, %i\n", sum1, sum2);
}
