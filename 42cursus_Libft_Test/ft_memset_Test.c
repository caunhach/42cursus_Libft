#include<stdio.h>
#include "../42cursus_Libft/libft.h"

 //gcc libft.h ft_memset.c ../42cursus_Libft_Test/ft_memset_Test.c

int main(void) {
  char str[20];
  ft_memset(str, 'a', 20);
  printf("%s\n", str);  // Output: "aaaaaaaaaaaaaaaaaaaa"
  return 0;
}