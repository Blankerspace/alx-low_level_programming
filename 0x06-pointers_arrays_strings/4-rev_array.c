#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;

	j = 0;
	n = n - 1;

	while (j < n)
	{
		temp = a[j];
		a[j] = a[n];
		i[n] = temp;
		j++;
		n--;
	}
}
