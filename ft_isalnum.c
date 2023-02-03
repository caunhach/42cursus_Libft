#include "libft.h"

int ft_isalnum(int arg)
{
    return (ft_isalpha(arg) == 1 || ft_isdigit(arg) == 1);
}