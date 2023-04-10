#iclude "main.h"
/**
 *set_bit - it sets bit at num to 1
 *@n: points to num
 *@index: number to change
 *Retuen: 1 if works otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
*n = (*n | m);
return (1);
}
