#include "main.h"

/**
 * get_endianness - checks the thing
 *
 * Return: 0 if big , 1 if little
 */
int get_endianness(void)
{
unsigned int J = 1;
char *c = (char *)&J;
if (*c == 0)
{
return (0);
}
else
{
return (1);
}
}
