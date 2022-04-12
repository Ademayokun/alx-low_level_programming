#include <unistd.h>
/**
 * main - entry point
 * return : 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
