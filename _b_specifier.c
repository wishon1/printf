#include "main.h"
/**
 * _b_specifier - prints input in binary (%b)
 * @arg: the name of the variadic list
 *
 * Return: returns the interger counter
 */
int _b_specifier(va_list arg)
{
	int start_extract, counter, index, bitMask, currentVal;
	unsigned int num, extractedBit;

	num = va_arg(arg, unsigned int);
	bitMask = 1;
	start_extract = 0;
	counter = 0;
	index = 0;

	while (index < 32)
	{
		extractedBit = ((bitMask << (31 - index)) & num);
		if (extractedBit >> (31 - index))
			start_extract = 1;
		if (start_extract)
		{
			currentVal = extractedBit >> (31 - index);
			_putchar(currentVal + 48);
			counter++;
		}
		index++;
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
