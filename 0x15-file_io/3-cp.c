#include "main.h"
#include <stdio>
/**
 *check_file_error - program checks if files will be opened.
 * @file_from: file from.
 * @file_to: file to.
 * @argv: arg vector.
 * Return: no return.
 */
void check_file_error(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot write to file %s\n", argv[2]);
exit(99);
}
}
/**
 * main - program check the code.
 * @argc: num of arguments.
 * @argv: arg vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, close_err;
ssize_t n_chars, n_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
check_file_error(file_from, file_to, argv);
n_chars = 1024;
while (n_chars == 1024)
{
n_chars = read(file_from, buffer, 1024);
if (n_chars == -1)
{
check_file_error(-1, 0, argv);
}
n_written = write(file_to, buffer, n_chars);
if (n_written == -1)
{
check_file_error(0, -1, argv);
}
}
close_err = close(file_from);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", file_from);
exit(100);
}
close_err = close(file_to);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", file_to);
exit(100);
}
return (0);
}
