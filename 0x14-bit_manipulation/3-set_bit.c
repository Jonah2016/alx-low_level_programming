#include "main.h"

/**
 * set_bit - changes the value of the bit to 1 at a given index.
 * @index: begins from 0, in regards to the bit you want to set
 * @n: the pointer number of i (index)
 * Return: the value 1 if it worked, or return -1 if an error was encoutered
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
