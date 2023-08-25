#include "main.h"
/**
 * selector - selects the specifier
 * @charac: the specifier.
 *
 * Return: returns an interger
 */
int (*selector(char charac))(va_list)
{
	if (charac == 'i')
	{
		return (&(_i_specifier));
	}
	else if (charac == 's')
	{
		return (&(_s_specifier));
	}
	else if (charac == 'c')
	{
		return (&(_c_specifier));
	}
	else if (charac == 'd')
	{
		return (&(_d_specifier));
	}
	else if (charac == 'x')
	{
		return (&(_x_specifier));
	}
	else if (charac == 'X')
	{
		return (&(_X_specifier));
	}
	else if (charac == 'o')
	{
		return (&(_o_specifier));
	}
	else
	{
		return (0);
	}
}
