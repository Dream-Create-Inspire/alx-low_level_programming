#include <unistd.h> /* For write function */
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, text, sizeof(text) - 1); /* -1 exclude the null terminator */

return (1);
}


