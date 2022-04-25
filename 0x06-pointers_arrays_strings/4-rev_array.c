#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int a;
	int temp;

	a = 0;
	n = n - 1;

	while (a < n)
	{
		temp = i[a];
		i[a] = i[n];
		i[n] = temp;
		a++;
		n--;
	}
}
