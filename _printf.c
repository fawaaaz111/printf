#include "main.h"

/**
 * _printf - custome version of printf
 * @format: the output format to be printed
 * @...: test of formats
 *
 * Return: numbers of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);
	va_end(arg);

      //  For (i = 0; i < 5; i++)
{Guy
}

	return (done);
}
