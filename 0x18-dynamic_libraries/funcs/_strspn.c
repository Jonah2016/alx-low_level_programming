#include "../main.h"
/**
 * _strspn - the len of the init segment of @s
 * that consists only of chars from @accept.
 * @s: string to be searched.
 * @accept: str containing the chars to match.
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (0);
}
