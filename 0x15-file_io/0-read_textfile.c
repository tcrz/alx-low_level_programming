#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return - actual number of letters it should read/print else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int x, y;
	char *c;

	if (!filename)
		return (0);

	 fd = open(filename, O_RDONLY);
        if (fd < 0)
                return (0);

	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);

	x = read(fd, c, letters);
	if (x < 0)
	{
		free(c);
		return (0);
	}
	c[x] = '\0';

	y = write(STDOUT_FILENO, c, x);
	if (y < 0)
	{
		free(c);
		return (0);
	}

	free(c);
	return (y);
}
