#include "main.h"

/**
 *Print_binary - Prints the binary appears of a num.
 *@n: The num printed in binary
 */
void print_binary(unsigned long int n)
{
int N, C = 0;
unsigned long int current;

for (N = 63; N >= 0; N--)
{
current = n >> N;
if (current & 1)
{
_putchar('1');
C++;
}
else if (C)
_putchar('0');
}
if (!C)
_putchar('0');
}
