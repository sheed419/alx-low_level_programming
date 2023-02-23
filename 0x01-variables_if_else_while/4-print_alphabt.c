#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the lowercase alphabet
 * without the letters 'q' and 'e' using only putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}

putchar('\n');

return (0);
}
