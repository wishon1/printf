#include "main.h"
/**
 * _X_specifier - prints hex numbers (%X)
 * @arg: name of the variadic list.
 * Return:return an interger counter.
 */
int _X_specifier(va_list arg)
{
	int *ptr, counter, index;
	unsigned int number, currentDigit;

	number = va_arg(arg, unsigned int);
	currentDigit = number;
	counter = 0;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	ptr = malloc(sizeof(int) * counter);

	index = 0;
	while (index < counter)
	{
		ptr[index] = currentDigit % 16;
		currentDigit /= 16;
		index++;
	}

	index = counter - 1;
	while (index >= 0)
	{
		if (ptr[index] > 9)
		{
			ptr[index] = ptr[index] + 7;
		}
		_putchar(ptr[index] + '0');
		index--;
	}
	free(ptr);
	return (counter);
}
