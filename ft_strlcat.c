#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len_s;

    i = ft_strlen(dest);
    j = 0;
    len_s = ft_strlen(src);
    if (i < size)
    {
        while (*src && i + j < size - 1)
        {
            *(dest + i + j++) = *src++;
        }
        *(dest + i + j) = '\0';
    }
    else
        i = size;
    return (i + len_s);
}