#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * istring - print string
 * @c: character
 * @v: argument
 * Return: number of bytes
 */
int istring(char c, va_list v)
{
	int i = 0;
	int length = 0;
	int x = 0;
	char *s;
	char n;


	if (c == '%')
	{
		n = '%';
		x = write(1, &n, 1);
		return (x);
	}
	if (c == 's')
	{
		s = va_arg(v, char*);
		if (s != NULL)
		{
			while (s[i])
			{
				length++;
				i++;
			}
			x = write(1, s, length);
		}
		else
		{
			s = "(null)";
			x = write(1, s, 6);
		}
	}
	else
	{
		n = va_arg(v, int);
		x = write(1, &n, 1);

	}

	return (x);
}
