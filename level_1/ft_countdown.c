
#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

int     main(void)
{
    int a;

    a = 9;
    while (a >= 0)
    {
        ft_putchar('0' + a);
        a--;
    }
    ft_putchar('\n');
    return(0);
}