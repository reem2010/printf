#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("complete the sentence: you %s nothing, .\n", (char*)0);
	int len = printf("complete the sentence: you %s nothing, .\n", (char*)0);
	printf("%d",len);
	return(0);
}
