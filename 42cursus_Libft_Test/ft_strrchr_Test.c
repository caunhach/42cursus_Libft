#include "../42cursus_Libft/libft.h"
#include <stdio.h>
#include <string.h>

//gcc libft.h ft_strrchr.c ../42cursus_Libft_Test/ft_strrchr_Test.c ft_strlen.c

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}