#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t nbytes = sizeof(message) - 1;
if (write(STDERR_FILENO, message, nbytes) != nbytes) {
    return 1;
   }
return 0;
}
