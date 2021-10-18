#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters it should read/print else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int sz1, sz2;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	sz1 = read(fd, buffer, letters);
	if (sz1 < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[sz1] = '\0';

	close(fd);

	sz2 = write(STDOUT_FILENO, buffer, sz1);
	if (sz2 < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (sz2);

}
