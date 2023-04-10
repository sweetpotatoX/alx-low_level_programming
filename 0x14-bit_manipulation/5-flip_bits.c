#include "main.h"

/**
 * flip_bits - number of different bits between numbers
 *defferntiat between two nums
 *@n:one
 *@m:two
 * Return: number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int change, ret;
unsigned int c, j;
c = 0;
ret = 1;
change = n ^ m;
for (j = 0; j < (sizeof(unsigned llong int) * 8); j++)
{
if (ret == (change & ret))
c++;
ret <<= 1;
}
return (c);
}
