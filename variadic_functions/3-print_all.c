#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - print every argument given followed by a newline
 *@format: format of the argument given in order
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str;
	char *separator = "";
	va_list arg;

	va_start(arg, format);

	if (format != NULL)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(arg);
}
