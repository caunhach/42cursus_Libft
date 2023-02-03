#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_isalnum.c ft_isalpha.c ft_isdigit.c ../42cursus_Libft_Test/ft_isalnum_Test.c

int main()
{
    printf("%d\n", ft_isalnum('a'));  //done Test lower a
    printf("%d\n", ft_isalnum('z'));  //done Test lower z
    printf("%d\n", ft_isalnum('A'));  //done Test lower z
    printf("%d\n", ft_isalnum('Z'));  //done Test lower z
    printf("%d\n", ft_isalnum('0'));  //done Test digit number
    printf("%d\n", ft_isalnum(' '));  //done Test spacebar
    printf("%d\n", ft_isalnum('\n'));  //done Test Special character
}