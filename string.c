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
	char f;


	if (c == '%')
	{
		f = '%';
		x = write(1, &f, 1);
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
	}
	else
	{
		f = va_arg(v, int);
		x = write(1, &f, 1);
	}

	return (x);
}
