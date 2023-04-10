#include "main.h"

/**
 *Print_binary - Prints the binary appears of a num.
 *@n: The num printed in binary
 */
void print_binary(unsigned llong int num)
{
if (num > 1)
Print_binary(num >> 1);
_putchar((num & 1) + '0');
}
