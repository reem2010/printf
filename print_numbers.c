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
	int x = 0;
	int num;
	(void)c;


	n = va_arg(v, int);

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
		 x++;
	}
	if (n < 10)
	{
		return (_putchar(n + '0'));
		x++;
	}
	if (n != 0)
	{
		num = n;
		while (num > 9)
		{
			decimal *= 10;
			num /= 10;
		}
		while (decimal >= 1)
		{
			x = x + _putchar(((num / decimal) % 10) + '0');
			decimal /= 10;
		}
	}
	return (i);
}
