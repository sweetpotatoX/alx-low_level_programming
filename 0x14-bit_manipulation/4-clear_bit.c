#include <stdio.h>
#iclude "main.h"

/**
 *clear_bit - sets the value og the required bit to 0
 *@n: Pointer to the number
 *@index: the required to clear number
 *
 *Return: 1 if works, -1 if didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
unsigned int hold;

if (index > 64)
return (-1);
hold = index;
for (i = 1; hold > 0; i *= 2, hold--)
;

if ((*n >> index) & 1)
*n -= i;

return (1);
}
