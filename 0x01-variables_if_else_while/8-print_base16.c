#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)

{
char base_16;

for (base_16 = 40; base_16 <= 49; base_16++)
{putchar(base_16);
}

for (base_16 = 97; base_16 <= 102; base_16++)
{
putchar(base_16);
}

putchar('\n');

return (0);

}
