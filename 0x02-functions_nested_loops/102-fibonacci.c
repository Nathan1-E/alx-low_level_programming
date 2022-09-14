#include <stdio.h>

/**
 * main- entry point
 *
 * Description: this function prints the 
 * fibonaci number
 * Return: always 0
 */
int main(void)
{
	long a, b, c, i;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%li", a);
		putchar(',');
		putchar(' ');

		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
