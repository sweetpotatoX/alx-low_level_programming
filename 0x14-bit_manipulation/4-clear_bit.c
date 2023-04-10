#include <stdio.h>
#iclude "main.h"

/**
 *clear_bit - sets the value og the required bit to 0.
 *@n: Pointer to the number.
 *@index: the required to clear number.
 *
 *Return: 1 if works, -1 if didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int j;
unsigned int seet;
if (index > 64)
return (-1);
seet = index;
for (j = 1; seet > 0; j *= 2, seet--)
;
if ((*n >> index) & 1)
*n -= j;
return (1);
}
