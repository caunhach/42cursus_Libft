#include<stdio.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_strchr.c ../42cursus_Libft_Test/ft_strchr_Test.c 

int main()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}