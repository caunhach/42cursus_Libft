#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *temp;
    char *d;

    d = (char *) dest;
    temp = (char *) src;
    if (dest <= src)
        return (ft_memcpy(dest, src, n));
    else
    {
        while (n--)
            d[n] = temp[n];
    }
    return (dest);
}