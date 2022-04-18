#include "main.h"
/**
 * swap - swap value of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

	return (0);
}
