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
	int fd1, fd2, sz;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2],  O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((sz = read(fd1, buf, 1024)) > 0)
	{
		if (fd2 < 0 || write(fd2, buf, sz) != sz)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd1);
			exit(99);
		}
	}
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
