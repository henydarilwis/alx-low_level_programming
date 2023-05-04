#include "main.h"

/**
 * print_binary - prints the binary rep
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int z)
{
	if (z >> 0)
	{
		if (z >> 1)
			print_binary(z >> 1);
		_putchar((z & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
