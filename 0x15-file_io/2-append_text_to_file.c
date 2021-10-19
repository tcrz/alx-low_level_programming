#include "main.h"

/**
 * append_text_to_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while(text_content[len])
			len++;
	}
	sz = write(fd, text_content, len);
	if (sz < 0)
		return (-1);

	return (1);
}
