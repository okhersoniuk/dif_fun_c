
#include <unistd.h>

void    ft_putchar(char a)
{
	write(1, &a, 1);
}

int     main(int argc, char **argv)
{
	char a;

	a = 0;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while (argv[1][a])
		{
			ft_putchar(argv[1][a]);
			a++;
		}
		ft_putchar('\n');
	}
	return(0);
}