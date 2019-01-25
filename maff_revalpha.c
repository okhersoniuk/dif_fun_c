
#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

int		main(void)
{
	int	a;

	a = 0;
	while (a < 26)
	{
		if ((a % 2) == 0)
			putchar('z' - a);
		else
			putchar('Z' - a);
		a++;
	}
	putchar('\n');
	return(0);
}