#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_tolower.c ../42cursus_Libft_Test/ft_tolower_Test.c

int main()
{
    printf("a -> %c\n", ft_tolower('a'));
    printf("A -> %c\n", ft_tolower('A'));
    printf("z -> %c\n", ft_tolower('z'));
    printf("Z -> %c\n", ft_tolower('Z'));
}