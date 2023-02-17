#include <studio.h>

/**
*main - prints the alphabet in lowercase,
*followed by a new line
*/
int main(void)
{
char ch;
for(ch = 'a'; ch<= 'z', ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
