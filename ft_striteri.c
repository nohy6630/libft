#include "libft.h"

char *ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}