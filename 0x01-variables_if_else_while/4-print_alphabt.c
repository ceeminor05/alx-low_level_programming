#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q')
		{
			alph++;
		}
		else if (alph == 'e')
		{
			alph++;
		}
		else
		{
			putchar(alph);
		}
	}
	putchar('\n');

		return (0);
}
