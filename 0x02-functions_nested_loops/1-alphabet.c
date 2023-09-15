#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return 0;
}
