#include <stdio.h>
/**
 * main - prints the alphabets in both upper and lower case
 * Return: Always 0
 */
int main(void)
{
	char cap;
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}

	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');

	return (0);
}
