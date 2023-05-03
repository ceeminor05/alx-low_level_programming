#include "main.h"
/**
 * reset_to_98 - takes a pointer and resets it to 98
 */
void reset_to_98(int *n)
{
	int num = 400;

	*n = &num;

	*n = 98;
}
