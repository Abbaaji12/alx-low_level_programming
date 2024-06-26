#include "main.h"

/**
 * get_bit - returns the val of a bit at an index in a deci num
 * @n: num to search
 * @index: index of the bit
 *
 * Return: val of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
