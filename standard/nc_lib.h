#ifndef NC_LIB_H
#define NC_LIB_H
#include <string.h>
#include <stdlib.h>
#include "nc_list.h"

void    *nc_memset(void *b, int c, size_t len);
size_t  nc_strlen(const char *s);
char    *nc_strdup(const char *s1);
char    *nc_strcpy(char *dst, const char *src);
char    *nc_strncpy(char *dst, const char *src, size_t len);
char    *nc_strchr(const char *s, int c);
int     nc_strcmp(const char *s1, const char *s2);
char    *nc_strjoin(char *s1, char *s2);
int     nc_isdigit(int c);
int     nc_toupper(int c);
int     nc_tolower(int c);
void    *nc_malloc(size_t size);
char    *nc_itoa(int n);
char    *nc_itoa_base(unsigned long number, int base);
char    *nc_reverse(char *str);
void    *nc_memcpy(void *restrict dst, const void *restrict src, int n);
char	*nc_strndup(const char *s1, size_t n);
char		**nc_strsplit(char const *s, char c);
#endif
