#include <stdio.h>



/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{


	int i = 48;

	int e = 49;

	while (i <= 57)

	{
	e = 49;
	while (e <=57)

	{

	
	putchar(i);

	putchar(e);

	if (i ==56 && e == 57)
	{
		break;
	}
	putchar(',');

	putchar(' ');

	e++;
	
	}

	i++;

	}

	putchar('\n');

	return (0);

}
