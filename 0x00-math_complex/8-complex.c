#include "holberton.h"

/**
* complex_from_mod_arg - update complex
* @m: double (distance)
* @arg: double (angle)
* @c3: complex
* Return: void
*/

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double a; /* im part */
	double b; /* re part */

	a = sin(arg) * m;
	b = cos(arg) * m;
	c3->re = b;
	c3->im = a;
}
