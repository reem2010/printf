#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * space - print space
 * @format: string
 * @i: index
 * Return: number of character
 */
int space(const char *format, int i)
{
	int s = 0, x = 0;

	while (format[i] && (format[i] == ' ' || format[i] == '#'))
	{
		if (format[i] == ' ')
			s = 1;
		i++;
	}
	if (s == 1)
		x = _putchar(' ');
	return (x);
}

