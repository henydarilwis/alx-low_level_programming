#include "main.h"

/**
 * get_endianness - check the endianness of this
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int c;
	char *d;

	c = 1;
	d = (char *) &c;

	return ((int)*d);
}
