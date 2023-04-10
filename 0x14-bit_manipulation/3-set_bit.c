#iclude "main.h"
/**
 *set_bit - it sets bit at num to 1
 *@j: points to num
 *@num: number to change
 *Retuen: 1 if works otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index);
unsigned int j;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n |= (1UL << index);
return (1);
}
