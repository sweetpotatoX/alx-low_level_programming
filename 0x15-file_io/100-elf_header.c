#include <stdio.h>
/**
 * main - to get header of ELF file
 * @argc: num of args in CLI
 * @argv: pointer on array of pointers
 * Return: 1 if works, otherwise error
 */
int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
