#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) (abs(x))
int abs(int x)
{
	if (x < 0)
	{
		x *= -1;
	}

	return (x);
}

#endif
