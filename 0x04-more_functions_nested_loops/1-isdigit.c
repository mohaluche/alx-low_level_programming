#include "main.h"

/**
 * _isdigit - checks if character is a digit 
 * @c: carrier variable
 * Return: 1 if correct, 0 if incorrect
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}

else
{
return (0);
}

}
