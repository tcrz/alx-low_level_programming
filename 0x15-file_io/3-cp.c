#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int fd1, fd2, sz, a, b;
	char buf[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((sz = read(fd1, buf, BUFSIZ) > 0))
	{
		if (fd2 < 0 || write(fd2, buf, sz) != sz)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", av[2]);
			close(fd1);
			exit(99);
		}
	}
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(99);
	}
	a = close(fd1);
	b = close(fd2);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
