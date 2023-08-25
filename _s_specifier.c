#include "main.h"
/**
 * _s_specifier - It prints a string
 * @arg: string to be printed
 * Return: number of bytes
 */
int _s_specifier(va_list arg)
{
	char *ptr;
	int counter;

	counter = 0;

	ptr = va_arg(arg, char *);

	while (*ptr != '\0')
	{
		putchar(*ptr);
		ptr++;
		counter++;
	}
	return (counter);
}
