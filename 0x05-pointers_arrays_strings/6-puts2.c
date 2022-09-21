#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one char out of 2 of a string.
 *@str: input string.
 * Return: no return.
 */

void puts2(char *str)

{

int count = 0;



while (*(str + count) != '\0')

{


if (count % 2 == 0)

putchar(*(str + count));

count++;

}
putchar(10);
}
