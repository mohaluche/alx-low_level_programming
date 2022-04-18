#include "main.h"
/**
 * print_rev - pirints a string in reverse
 *@s: string to reverse
 *Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i--;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
