#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * fun - get the function
 * @c: character to compare with
 * @v: argument
 * Return: 1 if it is founded
 */
int fun(va_list v, char c)
{
	spec sp[] = {
		{"sc%", 1, istring}, {"di", 1, print_int}, {"b", 1, binary}
	};
	int i = 0, j = 0, x = -1;

	while ((j < 3) && c)
	{
		i = 0;
		while ((sp[j].c)[i])
		{
			if ((sp[j].c)[i] == c)
				x = sp[j].p(c, v);
			i++;
		}
		j++;
	}
	return (x);
}


/**
 *  _printf - produces output according to a format
 *  @format: is a character string
 *  Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, sum = 0, x = 0;
	va_list data;

	va_start(data, format);
	while ((format != NULL) && format[i])
	{
		x = -1;
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			x = fun(data, format[i]);
			if (x == -1)
				x = write(1, &format[i - 1], 1);
			else
				i++;
		}
		else
		{
			x = write(1, &format[i], 1);
			i++;
		}
		sum = sum + x;
	}
	va_end(data);
	if (format == NULL)
		sum = -1;
	return (sum);
}
