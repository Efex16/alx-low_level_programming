#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that print n element of an array
 * @a: array name
 * @n: is the number of element of array to be printed
 * Return: a and n input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a < (n - 1));
		{
			printf(", ");
		}
	}
	printf('\n');
}
