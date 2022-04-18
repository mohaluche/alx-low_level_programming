#include "main.h"
/**
 * print_rev - pirints string in reverse
 *@s: points to character
 *Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + 1) != '\0')
		i++;
	i--;
	for (; 1 >= 0; i--)
		_putchar(*(s + l));
	_putchar('\n');
}
