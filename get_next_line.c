#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	char		*join_str;
	char		*line;
	static char	*stash;
	size_t		read_bytes;
	size_t		i;

	i = 0;
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	buffer[read_bytes] = '\0';
	if (read_bytes == 0 && !stash)
		return(free(stash), NULL);

	join_str = ft_strjoin(stash, buffer);
	free (stash);
	while (join_str[i] && (join_str[i] != '\n'))
		i++;
	line = ft_substr(join_str, 0, i + 1);
	if (!ft_strchr(join_str, '\n'))
		stash = NULL;
	else
		stash = ft_strdup(ft_strchr(join_str, '\n') + 1);
	return (free(join_str), line);
} // falta paa que funcione con una linea mas larga que BUFFER_SIZE y no acabe antes en \n
