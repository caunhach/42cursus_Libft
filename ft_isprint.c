#include "libft.h"

int ft_isprint(int arg)
{
    return (arg >= 32 && arg < 127);
}