#include <stdio.h>

/**
 * main - Prints the program's name followed by a new line
 * @argc: Argument count (unused)
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}