#include "main.h"

/**
 * _abs - entery point
 * @r: integer
 * Description:a function that computes the absolute value of an integer
 * Return: void
 */

int _abs(int r)

{
	if (r < 0)
	{
		int abs_val;

		abs_val = r * -1;
		return (abs_val);
	}
	return (r);
}
