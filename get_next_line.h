#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2
#endif

#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2, int read_size);
int	    ft_check(char *buf);
size_t	ft_strlen(char *str);
char    *ft_strdup(char *str);

#endif
