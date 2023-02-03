#include "libft.h"

int ft_isalpha(int arg)
{
    return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'));
}