#include<stdio.h>
#include "../42cursus_Libft/libft.h"
#include<string.h>

//gcc libft.h ft_memcpy.c ../42cursus_Libft_Test/ft_memcpy_Test.c

int main()
{
    char a[20] = "silence1234567";
    char b[20] = "abcdefghijklmn";
    char c[20] = "";
    char *p;
    /*
    p = a;
    ft_memmove(p, p + 5, 9);
    printf("%s\n", a);  //Done test char array
    p = b;
    ft_memmove(p + 5, p, 9);
    printf("%s\n", b);  //Done test with 0 n
    p = c;
    ft_memmove(p + 5, p, 9);
    printf("%s\n", c); //Done Test empty string
    */
    p = a;
    memmove(p, p + 5, 9);
    puts(p);  //Done test char array
    p = b;
    memmove(p + 5, p, 9);
    puts(p);  //Done test with 0 n
    p = c;
    memmove(p + 5, p, 9);
    puts(p); //Done Test empty string
    
    /*
    p = a;
    memcpy(p, p + 5, 9);
    printf("%s\n", a);  //Done test char array
    p = b;
    memcpy(p + 5, p, 9);
    printf("%s\n", b);  //Done test with 0 n
    p = c;
    memcpy(p + 5, p, 9);
    printf("%s\n", c); //Done Test empty string
    */
}