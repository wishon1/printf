#include "main.h"
/**
 * _i_specifier - prints an interger to output
 * @arg: variadic arguement.
 * Return: returns an integer stored in i_spec
 */
int _i_specifier(va_list arg)
{
	int value;

	value = 0;
	value = va_arg(arg, int);

	return (_custom_putchar(value, 0));
}
