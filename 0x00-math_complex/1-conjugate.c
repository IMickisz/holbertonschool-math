#include "holberton.h"

/**
* conjugate - return the conjugate
* @c: structure complex
* Return: conjugate of the complex
*/

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
