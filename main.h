#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct specifiers - struct specifiers
 * @c: charachter
 * @i: integer
 * @p: pointer to function
 */
typedef struct specifiers
{
	char *c;
	int i;
	int (*p)(char c, va_list v);
} spec;
int _printf(const char *format, ...);
int istring(char, va_list v);
int fun(char, char *);
#endif
