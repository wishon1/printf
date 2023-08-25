#include "main.h"
/**
 * _u_specifier - function thet handles an unsigned int (%u)
 * @arg: name of the variadic list.
 * Return: returns the interger(loop_counter)
 */
int _u_specifier(va_list arg)
{
	int counter, last_digit, digit, exponent, loop_counter;
	unsigned int value;

	value = va_arg(arg, unsigned int);
	last_digit = value % 10;
	exponent = 1;
	loop_counter = 1;
	value = value / 10;
	counter = value;

	if (last_digit < 0)
	{
		_putchar('-');
		counter = -counter;
		value = -value;
		last_digit = -last_digit;
		loop_counter++;
	}

	if (counter > 0)
	{
		while (counter / 10 != 0)
		{
			exponent *= 10;
			counter /= 10;
		}

		counter = value;
		while (exponent > 0)
		{
			digit = counter / exponent;
			_putchar(digit + '0');
			counter = counter - (digit * exponent);
			exponent = exponent / 10;
			loop_counter++;
		}
	}
	_putchar(last_digit + '0');

	return (loop_counter);
}
