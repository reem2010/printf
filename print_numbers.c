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
	  int x;
	  int num;
	 
	n= va_arg(v, int);

	printf("%s", "sara");
	printf("%d", n);
	printf("%c", c);

	  if (n < 0)
	 {
	 	n = n * -1;
	 	_putchar('-');
	 	i++;
	 }
	 if (n < 10)
	 {
	 	return (_putchar(n + '0'));
	 }
	 if (n > 0)
	 {
	 	while (n / 10 != '0')
	 	{
	 		decimal = decimal * 10;
	 		x = x / 10;
	 	}
	 	while (decimal >= 1)
	 	{
	 	 	num = n / decimal;
	 		_putchar((num % 10) + '0');
	 		decimal = decimal / 10;
	 		i++;
	 	}
	 }
	 /
	return (0);
}
