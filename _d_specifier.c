#include "main.h"
/**
 * _d_specifier - accepts an int and return it.
 * @arg: nameof the list.
 * Return: return an interger stored in result.
 */
int _d_specifier(va_list arg)
{
	int result, value;

	value = var_arg(arg, int);
	result = _custom_putchar(value, 0);
	return (result);
}
