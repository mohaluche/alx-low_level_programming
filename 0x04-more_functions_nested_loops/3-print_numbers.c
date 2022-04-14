#include "main.h"
/**
 * print_numbers - print  0 - 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;

	}
	_putchar('\n');
}
