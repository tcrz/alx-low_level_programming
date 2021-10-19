#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @ac: number of args
 * @av: array of  args
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd1, fd2, sz1;
	char buf[8000];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((sz1 = read(fd1, buf, 8000)) > 0)
	{
		if (fd2 < 0 || write(fd2, buf, sz1) != sz1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
			exit(99);
		}
	}
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[2]);
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
