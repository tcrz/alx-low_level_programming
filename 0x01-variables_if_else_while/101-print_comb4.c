#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n, m, o;

	for (n = '0'; n <= '7'; n++)
	{
		for (m = '1'; m <= '8'; m++)
		{
			for (o = '2'; o <= '9'; o++)
			{

				if (m > n && o > m)
				{
					putchar(n);
					putchar(m);
					putchar(o);


					if (n != '7' || m != '8' || o != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}

	}
	putchar('\n');
	return (0);
}

