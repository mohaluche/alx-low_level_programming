#include "main.h"
/**
 * main - main entry
 * A function that prints the alphabet, in lowercase.
 **/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		_putchar(c);

	_putchar('\n');
}
