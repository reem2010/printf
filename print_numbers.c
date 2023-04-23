#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - print integer
 * @c: is a character
 * @v: argument
 * Return: number
 */

int print_int(char c, va_list v)
{
	int i = 0;
	int n;
	int decimal = 1;
	int num;
	(void)c;


	n = va_arg(v, int);

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		i++;
	}
	if (n < 10)
	{
		return (i = i + _putchar(n + '0'));
		i++;
	}
	if (n != 0)
	{
		num = n;
		while (num > 9)
		{
			decimal *= 10;
			num /= 10;
			i++;
		}
		while (decimal >= 1)
		{
			_putchar(((n / decimal) % 10) + '0');
			decimal /= 10;
		}
		i++;
	}
	return (i);
}
