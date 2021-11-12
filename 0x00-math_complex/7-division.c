#include "holberton.h"

/**
* division - return the division
* @c1: complex
* @c2: complex
* @c3: complex pointer
* Return: void
*/

void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double c = c2.re;
	double d = c2.im;

	c3->re = ((a * c) + (b * d)) / (c*c) + (d*d));
	c3->im = ((b * c) - (a * d)) / ((c*c) + (d*d));
}
