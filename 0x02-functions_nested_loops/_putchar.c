#include <unistd.h>

/**
 * _putchar.c - writes the cahracter c to the stdout
 * @c: this the character to be printed
 * Return: on success 1
 * On error; -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return  (write(1,&c,1));
}
