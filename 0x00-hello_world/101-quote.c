#include <unistd.h>
/**
 * main - Main ENtry
 * Return:1
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpakr, 2015-10-19\n";

	write(2, quo, sizeof(quo));

	return (1);
}
