#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  len;

    len = 0;
    while (*(src + len) && size--)
    {
        *dst++ = *(src + len++);
    }
    while (*(src + len))
        len++;
    return (len);
}