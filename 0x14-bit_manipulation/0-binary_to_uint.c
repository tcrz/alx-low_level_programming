#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        int i, len, x;
        unsigned int total = 0;

        len = 0;
        while (b[len])
                len++;
        else
                return (0);

        len = len - 1;
        for (i = 0; b[i]; i++, len--)
        {
                if (b[i] == '0' || b[i] == '1')
                {
                        x = b[i] & 1;
                        total += x << len;
                }
                else
                        return (0);
        }

        return (total);
}
