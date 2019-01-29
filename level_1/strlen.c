#include <stdio.h>

int     ft_strlen(char *str)
{
    int a;

    if (!*str)
        return (0);
    a = 0;
    while (*str++)
        a++;
    return (a);
}