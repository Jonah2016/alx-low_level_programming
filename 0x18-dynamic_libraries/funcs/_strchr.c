#include "../main.h"
/**
 * _strchr - Locates a char in a str
 * @s: The str to search in.
 * @c: The char to search for.
 *
 * Return: always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
