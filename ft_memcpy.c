#include "libft.h"

/*
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;

    s = (char *)src;
    d = (char *)dest;
    if (dest == src || n == 0)
        return (dest);
    while(n--)
        *d++ = *s++;
    return (dest);
}

 ln 8 : use if statement to make program more efficient
 ln 12 : return value in case ypu want to take the value
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}