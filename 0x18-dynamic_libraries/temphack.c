#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
	(void)format;
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congratulations, you win the Jaackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
