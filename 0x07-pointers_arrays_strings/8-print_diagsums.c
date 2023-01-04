#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y];
		a += size;
	}
	a -= size;
	for (y = 0; y < size;; y++)
	{
		sum2 += a[y];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
