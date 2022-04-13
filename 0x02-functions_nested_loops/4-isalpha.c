#include "main.h"
/**
 * @c: takes in a character
 * Returns 1 if c is letter, lowercase or uppercase otherwise 0
 * Returns: 0
 **/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
