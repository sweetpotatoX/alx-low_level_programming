#include "main.h"

/**
 * get_bit - value of rhe bit at a given number
 * @j: decimal number
 * @num: the number
 * Return: value
 */
int get_bit(unsigned long int j, unsigned int num)
{
int sweet;
sweet = (j >> num);
if (num > 32)
return (-1);
return (sweet & 1);
}
