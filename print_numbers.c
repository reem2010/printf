#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * print_int - print integer
 * @c: is a character
 * @v: argument
 * Return: number
 */

int print_int(char c, va_list v)
{
	int i = 0, n, num, decimal = 1, a = 0;

	n = va_arg(v, int);
	if (n < 0)
	{
		_putchar('-');
		i++;
		if (n == INT_MIN)
		{
			n = (n + 1) * -1;
			a = 1;
		}
		else
			n = n * -1;
	}
	else if (n > 0 && c == '+')
		i = i +  _putchar('+');
	if (n < 10 && c == '+')
		return (i = i + _putchar(n + '0'));
	num = n;
	while (num > 9)
	{
		decimal *= 10;
		num /= 10;
		i++;
	}
	while (decimal >= 1)
	{
		if ((decimal == 1) && (a == 1))
			_putchar((n / decimal) + 1 + '0');
		else
			_putchar((n / decimal) + '0');
		n = n % decimal;
		decimal /= 10;
	}
	i++;
	return (i);
}
