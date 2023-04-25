#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_P - print pointer
 * @c: character
 * @v: argument
 * Return: number of bytes
 */

int print_P(char c, va_list v)
{
	void *ptr = va_arg(v, void *);
	(void)c;

	ptr = malloc(1024);
	free(ptr);
	return (0);
}
