#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t i;

    i = 0;
    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    while (i++ < n )
    {
        if (s1[i] != s2[i] || s1[i] == '\0')
            break;    
    }
    return (*s1 - *s2);
}