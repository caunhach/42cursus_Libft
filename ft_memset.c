#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;

    p = s;
    while(n--)
        *p++ = c;
    return (s);
}
//ln 5 : unsigned char to protect bitwise operations on the value, or when you want to ensure that the value is always non-negative.