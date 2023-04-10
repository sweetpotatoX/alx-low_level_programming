#include "main.h"
#include <stdio.h>
/**
 * clear_bit - make the value of a bit to 0 
 * @n: pointer to number
 * @index: index position 
 * Return: 1 if it worked, -1 if didin't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int j;
unsigned int hold;

if (index > 64)
return (-1);
hold = index;
for (j = 1; hold > 0; j *= 2, hold--)
;

if ((*n >> index) & 1)
*n -= j;

return (1);
}
