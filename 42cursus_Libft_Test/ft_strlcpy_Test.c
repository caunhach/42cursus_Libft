#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_strlcpy.c ../42cursus_Libft_Test/ft_strlcpy_Test.c

int main()
{
    int len;
    char src [ ] = "Hello World";
    char dest [100];
    len = ft_strlcpy(dest, src, 5);
    printf("dest = %s\n", dest);
    printf("len = %d\n", len);
}