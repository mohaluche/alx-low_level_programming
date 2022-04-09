#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; nuber++)
	{
		putchar(number);

		if (number == 57)
		{
			break
		}

		putcher(',');
		putchar (' ');
	}

	putchar('\n');

	return (0);

}
