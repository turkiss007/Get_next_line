#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//INCLUDES
# include <unistd.h>
# include <stdlib.h>

//DEFINES
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

//PROTOTIPES
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);

#endif