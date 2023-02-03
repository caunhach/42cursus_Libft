#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_isascii.c ../42cursus_Libft_Test/ft_isascii_Test.c

int main()
{
    printf("%d\n", ft_isascii('a'));  //done Test lower a
    printf("%d\n", ft_isascii('z'));  //done Test lower z
    printf("%d\n", ft_isascii('A'));  //done Test lower z
    printf("%d\n", ft_isascii('Z'));  //done Test lower z
    printf("%d\n", ft_isascii('0'));  //done Test digit number
    printf("%d\n", ft_isascii(' '));  //done Test spacebar
    printf("%d\n", ft_isascii('\n'));  //done Test Special character
}