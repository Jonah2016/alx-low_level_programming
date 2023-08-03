#include "main.h"
/**
 * flip_bits - this will flip to retrieve from one num to another.
 * @n: this represents the first number
 * @m: this represents the second number
 * Return: the number of bits you need to flip the values
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
