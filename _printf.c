#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: Number of bytes printed
 */

int _printf(const char *format, ...)
{
	int i, count;
	char x;
	va_list arg;

	va_start(arg, format);

	count = 0;
	i = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			x = format[i + 1];

			if (x == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += (*selector(x))(arg);
				i++;
			}

		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
