#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append the text to.
 * @text_content: The NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, bytes_written;
if (!filename)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
bytes_written = write(fd, text_content, len);
else
bytes_written = 0;

close(fd);
return (bytes_written == len ? 1 : -1);
}
