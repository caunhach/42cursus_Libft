#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_isprint.c ../42cursus_Libft_Test/ft_isprint_Test.c

int main()
{
    printf("%d\n", ft_isprint('a'));  //done Test lower a
    printf("%d\n", ft_isprint('z'));  //done Test lower z
    printf("%d\n", ft_isprint('A'));  //done Test lower z
    printf("%d\n", ft_isprint('Z'));  //done Test lower z
    printf("%d\n", ft_isprint('0'));  //done Test digit number
    printf("%d\n", ft_isprint(' '));  //done Test spacebar
    printf("%d\n", ft_isprint('\n'));  //done Test Special character
    printf("%d\n", ft_isprint('\t'));  //done Test Special character
}