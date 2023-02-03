#include<stdio.h>
#include<string.h>
#include "../42cursus_Libft/libft.h"

//gcc libft.h ft_bzero.c ../42cursus_Libft_Test/ft_bzero_Test.c
/*
	int main()
	{
	    char s1[] = "Silence123";
	    char s2[] = " He\tl..,lo World\n";
	    char s3[] = "";
	    char *p = s1;
	    ft_bzero(p + 5, 5);
	    printf("%s\n", s1);  //Done test string composed of digit, lower and upper alphabeth
        p = s2;
	    ft_bzero(p + 5, 5);
	    printf("%s\n", s2);  //Done test p = ft_bzero(...)
        p = s3;
	    ft_bzero(p + 5, 5);
	    printf("%s\n", s3); //Done Test empty string 
	}
*/

		int main()
	{
	    char s1[] = "Silence123";
	    char s2[] = " He\tl..,lo World\n";
	    char s3[20] = "";
		char s4[20];
	    char *p = s1;
	    bzero(p + 5, 5);
	    printf("%s\n", s1);  //Done test string composed of digit, lower and upper alphabeth
        p = s2;
	    bzero(p + 5, 5);
	    printf("%s\n", s2);  //Done test p = ft_bzero(...)
        p = s3;
	    bzero(p + 5, 5);
	    printf("%s\n", s3); //Done Test empty string
	}