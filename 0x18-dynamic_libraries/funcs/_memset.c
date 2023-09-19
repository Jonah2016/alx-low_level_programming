#include "../main.h"

/**
 * _memset - Fill a block of memory with a specified byte value
 * @s: pntr to the memory area to be filled
 * @b: the byte val to be copied
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
