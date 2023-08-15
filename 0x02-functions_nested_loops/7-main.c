#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(88);
    print_last_digit(88);
    r = print_last_digit(-88);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
