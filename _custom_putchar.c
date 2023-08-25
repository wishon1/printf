#include "main.h"
/**
 * custom_putchar - function that prints, numbers <= 0 or numbers >= 9
 * @num: integer passed as value to putchar
 * @iterate: counts the value of num and gives the length.
 * Return: Returns an integer.
 */
int _custom_putchar(int num, int iterate)
{
        int n;
        char x;

        if (num < 0)
        {
                n = -num;
                _putchar('-');
                iterate++;
        }
        else if (num >= 0)
        {
                n = num;
        }

        if (n / 10)
        {
                iterate = _custom_putchar(n / 10, iterate);
        }

        x = n % 10;
        _putchar(x + '0');

        return (iterate + 1);
}
