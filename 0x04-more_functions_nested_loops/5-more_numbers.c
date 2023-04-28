#include "main.h"
/**
 * more_numbers - prints numbers
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;

	while (i <= 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}

		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
