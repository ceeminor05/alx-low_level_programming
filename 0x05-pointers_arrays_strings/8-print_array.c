#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n array
 * @n: int
 * @a: int
 * Retur: no return
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
