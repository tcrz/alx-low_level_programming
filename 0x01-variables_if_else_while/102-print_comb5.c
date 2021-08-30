#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints  all possible two two-digit combinations
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{

		for (b = '0'; b <= '8'; b++)
		{

			for (c = '0'; c <= '9'; c++)
			{

				for (d = '0'; d <= '9'; d++)
				{
					if (a <= c && b < d)
					{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

						if (a != '9' || b != '8' || c != '9' || d != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}

			}

		}
	}
	putchar('\n');
	return (0);
}

