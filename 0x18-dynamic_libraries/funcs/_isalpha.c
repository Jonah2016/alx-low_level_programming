#include "../main.h"
/**
 * _isalpha - checks alphabet chars
 * @c: The char to be checked
 * Return: 1 for alphabet char else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
