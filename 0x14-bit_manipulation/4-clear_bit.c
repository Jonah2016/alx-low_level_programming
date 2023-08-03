#include "main.h"

/**
 * clear_bit - this will set the value of the bit to 0 at a given index.
 * @n: the number of i (index)
 * @index: this will be set starting from position of 0 of bit you want to set
 * Return: the value 1 if it worked, or return -1 if an error encountered
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
