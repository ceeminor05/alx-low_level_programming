#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
}
