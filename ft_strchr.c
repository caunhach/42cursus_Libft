#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (*str != (char)c && *str)
        str++;
    if (*str)
        return (char *)str;
    return NULL;
}