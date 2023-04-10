#iclude "main.h"
/**
 *set_bit - it sets bit at num to 1
 *@j: points to num
 *@num: number to change
 *Retuen: 1 if works otherwise -1
 */
int set_bit(unsigned long int *j, unsigned int num)
{
if (index > (8 * sizeof(*j)) - 1)
return (-1);
*j |= (1 << num);
retun (1);
}
