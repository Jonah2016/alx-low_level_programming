#include "../main.h"
/**
 * _strpbrk - get the 1st occurrence of any char in `accept` within `s`
 * @s: str to be searched
 * @accept: set of chars to search for
 *
 * Return: Always 0(Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
				return (s);
		}
		s++;
	}
	return ('\0');
}
