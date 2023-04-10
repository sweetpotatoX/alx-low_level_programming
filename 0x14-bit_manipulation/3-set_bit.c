#iclude "main.h"
/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int j;
if (index > 64)
return (-1);
for (j = 1; index > 0; index--, j *= 2)
;
*n += p;
return (1);
}
