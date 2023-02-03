#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_toupper.c ../42cursus_Libft_Test/ft_toupper_Test.c

int main()
{
    printf("a -> %c\n", ft_toupper('a'));
    printf("A -> %c\n", ft_toupper('A'));
    printf("z -> %c\n", ft_toupper('z'));
    printf("Z -> %c\n", ft_toupper('Z'));
}