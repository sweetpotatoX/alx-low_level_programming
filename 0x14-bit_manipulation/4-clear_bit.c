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
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
