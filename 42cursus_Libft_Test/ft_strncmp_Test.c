#include <stdio.h>
#include <string.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_strncmp.c ../42cursus_Libft_Test/ft_strncmp_Test.c

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   printf("\n");
   
   return(0);
}