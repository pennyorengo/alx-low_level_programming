#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 * void: return value
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
