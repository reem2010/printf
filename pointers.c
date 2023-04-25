#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * print_P - print pointer
 * @c: character
 * @v: argument
 * Return: number of bytes
 */

int print_P(char c, va_list v)
{
	int x;
	void *addr;
	void *ptr;
	(void)c;

	addr = va_arg(v, void *);

	ptr = malloc((sizeof(addr)));

	ptr = ((char *)addr);
	x = write(1, &ptr, (sizeof(addr)));
	free(ptr);
	return (x);
}
