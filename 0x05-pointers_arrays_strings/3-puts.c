#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */

void _puts(char *str)

{

int count = 0;

while (*(str + count) != '\0')

{

putchar(*(str + count));

count++;

}
putchar(10);

}
