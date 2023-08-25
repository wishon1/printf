#include "main.h"
/**
 * _x_specifier - function that handles x specifier
 * @arg: name of variadic list.
 * Return: return the interger 'counter'.
 */
int _x_specifier(va_list arg)
{
	int i, *digit, counter;
	unsigned int number, value;

	number = va_arg(arg, unsigned int);
	value = number;
	counter = 0;
	i = 0;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	digit = malloc(sizeof(int) * counter);

	while (i < counter)
	{
		digit[i] = value % 16;
		value /= 16;
		i++;
	}

	i = counter - 1;
	while (i >= 0)
	{
		if (digit[i] > 9)
			digit[i] = digit[i] + 39;
		_putchar(digit[i] + '0');
		i--;
	}

	free(digit);
	return (counter);
}
