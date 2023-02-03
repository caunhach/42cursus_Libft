#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_isdigit.c ../42cursus_Libft_Test/ft_isdigit_Test.c

int main()
{
    printf("%d\n", ft_isdigit('a'));  //done Test lower a
    printf("%d\n", ft_isdigit('z'));  //done Test lower z
    printf("%d\n", ft_isdigit('A'));  //done Test lower z
    printf("%d\n", ft_isdigit('Z'));  //done Test lower z
    printf("%d\n", ft_isdigit('0'));  //done Test digit number
    printf("%d\n", ft_isdigit('\n'));  //done Test Special character
}