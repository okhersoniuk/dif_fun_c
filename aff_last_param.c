
#include <unistd.h>

void    putchar(char a)
{
	write(1, &a, 1);
}

int     main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argc < 2)
		putchar('\n');
	else
	{
		argc--;
		while (argv[argc][a])
		{
			putchar(argv[argc][a]);
			a++;
		}
		putchar('\n');
	}
	return (0);
}