#include <stdio.h>

/**
 *main - single digit numbers
 *
 *Description: print single digit numbers followe by new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
