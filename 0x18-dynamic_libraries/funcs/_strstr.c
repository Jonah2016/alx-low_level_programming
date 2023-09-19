#include "../main.h"
/**
 * _strstr - Locates the 1st occurrence of a substring in a string.
 * @haystack: The str to search in.
 * @needle: substring to search for.
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *d = needle;

		while (*h == *d && *d != '\0')
		{
			h++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
