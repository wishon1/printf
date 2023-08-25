#include "main.h"
/**
 * _c_specifier - accepts an a character and returns it to output.
 * @arg: variadic aguement.
 * Return: returns a chracter
 */
int _c_specifier(va_list arg)
{
	char c;

	c = va_arg(arg, int);

i	_putchar(c);

	return (1);
}
