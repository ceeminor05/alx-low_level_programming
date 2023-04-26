#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: number to be inputed
 * Return: last digit of number
 */
int print_last_digit(int c)
{
	int t = c % 10;
	
	if (t < 0)
		t *= -1;
	_putchar(t + '0');

	return (0);
}
