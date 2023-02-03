#include "libft.h"

size_t ft_strlen(const char *s)
{
    int cnt;

    cnt = 0;
    while(*s++)
        cnt++;
    return (cnt);
}