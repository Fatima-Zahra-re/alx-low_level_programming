#include "holberton.h"
#include "main.h"
/**
 * main - prints string from a character array.
 * @c : the character to print
 * Return: 1 on success.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
