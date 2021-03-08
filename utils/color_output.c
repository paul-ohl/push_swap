#include <unistd.h>

int		main(void)
{
	write(1, "\033[0;31mhello\033[1;34m World\n", 26);
}
