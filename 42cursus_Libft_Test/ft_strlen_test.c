#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_strlen.c ../42cursus_Libft_Test/ft_strlen_Test.c

int main()
{
    printf("%lu\n", ft_strlen("Silence123"));  //Done test string composed of digit, lower and upper alphabeth
    printf("%lu\n", ft_strlen(" He\tl..,lo World\n"));  //Done test string containing of special character
    printf("%lu\n", ft_strlen("")); //Done Test empty string
    int a;
    a = ft_strlen("Silence123");
     printf("%d\n", a); //Done Test with int variable
}