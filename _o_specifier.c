#include "main.h"
/**
 * _o_specifier - print octal numbers (%o)
 * @arg: name of the variadic list.
 *
 * Return: return the interger counter.
 */
int _o_specifier(va_list arg)
{
	int *octalDigit, counter, index;
	unsigned int number;
	unsigned int currentDigit;

	number = va_arg(arg, unsigned int);
	currentDigit = number;
	counter = 0;

	while (number / 8 != 0)
	{
		number /= 8;
		counter++;
	}
	counter++;
	octalDigit = malloc(sizeof(int) * counter);

	index = 0;
	while (index < counter)
	{
		octalDigit[index] = currentDigit % 8;
		currentDigit /= 8;
		index++;
	}

	index = counter - 1;
	while (index >= 0)
	{
		_putchar(octalDigit[index] + '0');
		index--;
	}

	free(octalDigit);
	return (counter);
}
