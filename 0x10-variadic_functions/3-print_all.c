#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 *
 * @format: specifies the necessary operations
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list everything;

	va_start(everything, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(everything, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(everything, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(everything, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(everything, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}

		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(everything);
}
