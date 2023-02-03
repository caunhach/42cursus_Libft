#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_isalpha.c ../42cursus_Libft_Test/ft_isalpha_Test.c

int main()
{
    printf("%d\n", ft_isalpha('a'));  //done Test lower a
    printf("%d\n", ft_isalpha('z'));  //done Test lower z
    printf("%d\n", ft_isalpha('A'));  //done Test lower z
    printf("%d\n", ft_isalpha('Z'));  //done Test lower z
    printf("%d\n", ft_isalpha('0'));  //done Test digit number
    printf("%d\n", ft_isalpha('\n'));  //done Test Special character
}