#include <unistd.h>
/**
 * _putchar - write trhe character c to stdout 
 * @c: character to print
 * Return: 1 if true and 0 is false
 * on error -  return -1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}

