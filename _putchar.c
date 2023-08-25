#include "main.h"
/**
 * _putchar - custom putchar that function like the c defined putchar
 * @c: character to be passed to _putchar.
 * Return: return 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
