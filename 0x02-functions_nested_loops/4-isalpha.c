#include "main.h"
/**
 * Returns 1 if c is letter, lowercase or uppercase otherwise 0
 * @c: takes in a character
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
