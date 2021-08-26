#include <unistd.h>

/**
 * main - prints given text using write()
 *
 * Return: 1 if successful
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
