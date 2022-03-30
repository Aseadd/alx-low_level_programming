#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of square matrix
 * of integers
 * @a: values of the array
 * @size: size of square
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum, sum2;

	sum = sum2 = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sum += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum, sum2);
}
