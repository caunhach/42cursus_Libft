#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int len;

    len = ft_strlen(str);
    while(len--)
    {
        if (str[len] == (char)c)
            return ((char *)(str + len));
    }
    return (NULL);
}