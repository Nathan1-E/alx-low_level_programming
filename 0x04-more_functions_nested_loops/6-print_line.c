#include "main.h"

/**
 * print_line- print lines
 *
 * @n: argument
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);

		if (n < 0)
			_putchar('\n');
	}
}
