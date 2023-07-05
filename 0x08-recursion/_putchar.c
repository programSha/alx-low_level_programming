#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character to stdout
 * @c This is the character to print
 * Return: returns 1 on success
 * On error, -1 is returnedand errrno is set appropriately
 */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
