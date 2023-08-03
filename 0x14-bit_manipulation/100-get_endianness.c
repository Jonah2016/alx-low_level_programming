#include "main.h"
/**
 * get_endianness - this will check the endianness
 *
 * Return: the value 0 if big endian, and 1 if small endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
