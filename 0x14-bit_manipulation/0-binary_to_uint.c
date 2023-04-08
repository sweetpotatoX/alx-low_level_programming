#include "main.h"

/**
 * convert_binary_to_uint - converts a binary number to an unsigned int
 * @binary_str: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string that is not 0 or 1
 * binary_str is NULL
 */
unsigned int convert_binary_to_uint(const char *binary_str)
{
unsigned int result = 0;

if (!binary_str)
return (0);

while (*binary_str)
{
if (*binary_str != '0' && *binary_str != '1')
return (0);
result <<= 1;
if (*binary_str == '1')
result += 1;
binary_str++;
}
return (result);
}
