#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <unistd.h>

char*   get_next_line(int fd);
int     ft_check(char* str);
char    *ft_strjoin(char *s1, char *s2, int read_size);
int     get_index(char *str);
size_t  ft_strlen(char *str);
void    rearrange(char *str);
#endif
