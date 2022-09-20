
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)

{

	int i = strlen(s);
	while (i--)
		putchar(*((s + i));
	putchar(10);
}

