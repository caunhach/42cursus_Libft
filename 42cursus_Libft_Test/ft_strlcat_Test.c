#include<stdio.h>
#include<string.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_strlcat.c ../42cursus_Libft_Test/ft_strlcat_Test.c ft_strlen.c

int main()
{
    int len;
    char src [ ] = "Hello World";
    char dest [10] = "cat";
    len = ft_strlcat(dest, src, 5);
    printf("dest = %s\n", dest);
    printf("len = %d\n", len);
    char src1 [ ] = "Hello World";
    char dest1 [10] = "doggy me";
    len = ft_strlcat(dest1, src, 5);
    printf("dest = %s\n", dest1);
    printf("len = %d\n", len);
}