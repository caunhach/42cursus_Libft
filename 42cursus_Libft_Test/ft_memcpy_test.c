#include<stdio.h>
#include "../42cursus_Libft/libft.h"
#include<string.h>

//gcc libft.h ft_memcpy.c ../42cursus_Libft_Test/ft_memcpy_Test.c

int main()
{
    char a[20];
    unsigned char b[20];
    char c[20];
    char *p;
    
    p = a;
    ft_memcpy(p, "Silence123", 5);
    printf("%s\n", p);  //Done test char array
    p = ft_memcpy(p, " He\tl..,lo World\n", 0); //Done test p = ft_memcpy(...);
    printf("%s\n", p);  //Done test with 0 n
    p = c;
    ft_memcpy(p, "", 5);
    printf("%s\n", p); //Done Test empty string
    
    /*
    p = a;
    memcpy(p, "Silence123", 5);
    printf("%s\n", p);  //Done test char array
    p = memcpy(p, " He\tl..,lo World\n", 0); //Done test p = ft_memcpy(...);
    printf("%s\n", p);  //Done test with 0 n
    p = c;
    memcpy(p, "", 5);
    printf("%s\n", p); //Done Test empty string
    */
}