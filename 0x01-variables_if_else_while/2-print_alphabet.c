#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the lowercase alphabet
 * using only putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }

        putchar('\n');

        return (0);
}
