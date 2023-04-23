#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * fun - get the function
 * @c: character to compare with
 * @s: string
 * Return: 1 if it is founded
 */
int fun(char c, char *s)
{
	int i = 0;

	while ((s)[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}


/**
 *  _printf - produces output according to a format
 *  @format: is a character string
 *  Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	spec sp[] = {
		{"sc%", 1, istring}
	};
	int i = 0, sum = 0, j = 0, x = 0;
	va_list data;

	va_start(data, format);
	while ((format != NULL) && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 1)
			{
				if ((format[i]) && fun(format[i], sp[j].c))
				{
					x = sp[j].p(format[i], data);
					i++;
				}
				j++;
			}
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


