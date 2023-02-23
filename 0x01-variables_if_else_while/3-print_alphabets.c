#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the lowercase alphabet
 * followed by the uppercase alphabet using only putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

/* print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

/* print uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
