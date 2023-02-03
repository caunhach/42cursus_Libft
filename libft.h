#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
#include<stdlib.h>

#define TRUE (1 == 1)
#define FALSE (1 == 0)

int ft_isalpha(int arg);
int ft_isdigit(int arg);
int ft_isascii(int arg);
int ft_isalnum(int arg);
int ft_isprint(int arg);
size_t ft_strlen(const char *s);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int ch);
int ft_tolower(int ch);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);

#endif