#include "main.h"
/**
 * reverse_array - reverse array
 * @n: number of elements in array
 * @a: array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
