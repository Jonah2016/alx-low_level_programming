#include "../main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pntr to the dest memory sector
 * @src: Pntr to the source memory sector
 * @n: Num of bytes to be copied
 *
 * Return: Pntr to the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
