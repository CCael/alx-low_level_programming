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
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];

		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}

