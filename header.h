#ifndef HEADER_H
#define HEADER_H
#include <string.h>

void    *nc_memset(void *b, int c, size_t len);
size_t  nc_strlen(const char *s);
char    *nc_strdup(const char *s1);
char    *nc_strcpy(char *dst, const char *src);
char *nc_strncpy(char *dst, const char *src, size_t len);

#endif