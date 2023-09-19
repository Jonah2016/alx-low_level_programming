#include "../main.h"
/**
 * _abs - gets the abs val of an int.
 * @c: the number to be computed.
 * Return:  num or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
