#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char jo[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(jo[c]);
	}
	_putchar('\n');
	return (0);
}
