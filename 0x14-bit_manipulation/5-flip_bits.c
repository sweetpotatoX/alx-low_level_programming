#include "main.h"

/**
 * flip_bits - number of different bits in two nums
 * @n: first
 * @m: second
 *
 * Return: number of bits that youy want to fip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int change, ret;
unsigned int count, i;

count = 0;
ret = 1;
change = n ^ m;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (ret == (change & ret))
count++;
ret <<= 1;
}
return (count);
}
