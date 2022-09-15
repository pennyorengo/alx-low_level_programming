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

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
