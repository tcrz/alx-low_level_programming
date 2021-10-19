#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd1, fd2, sz1, sz2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2,"Usage: %s file_from file_to", av[0]);
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(2,"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(2,"Error: Can't write to  %s\n", av[2]);
		exit(99);
	}

	sz1 = read(fd1, buf, 1024);
	if (sz1 < 0)
	{
		dprintf(2,"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf[sz1] = '\0';

	sz2 = write(fd2, buf, sz1);
	if (sz2 < 0)
	{
		dprintf(2,"Error: Can't write to  %s\n", av[2]);
		exit(99);
	}

	  if (close(fd1) < 0)
        {
		dprintf(2,"Error: Can't close fd %d", close(fd1));
                exit(100);
        }

	 if (close(fd2) < 0)
        {
		dprintf(2,"Error: Can't close fd %d", close(fd2));
                exit(100);
        }

	return (0);
}
