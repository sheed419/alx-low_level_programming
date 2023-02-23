#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line, using only the putchar() function.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
int i;

/* Loop from 0 to 9 and print each number */
for (i = 0; i < 10; i++)
{
/* Convert integer to character and print */
putchar(i + '0');
}

/* Print a new line character */
putchar('\n');

return (0);
}
