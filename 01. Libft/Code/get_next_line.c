/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:09:26 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/15 00:09:34 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*update_next_line(char *line)
{
	size_t	c;
	char	*rest;

	c = 0;
	while (line[c] != '\n' && line[c] != '\0')
		c++;
	if (line[c] == '\0' || line[1] == '\0')
		return (0);
	rest = ft_substr(line, c + 1, ft_strlen(line) - c);
	if (*rest == '\0')
	{
		free(rest);
		rest = NULL;
	}
	line[c + 1] = '\0';
	return (rest);
}

static char	*get_line(int fd, char *buffer, char *rest)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read != '\0')
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (0);
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!rest)
			rest = ft_strdup("");
		temp = rest;
		rest = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr (buffer, '\n'))
			break ;
	}
	return (rest);
}

char	*get_next_line(int fd)
{
	char			*line;
	char			*buffer;
	static char		*rest;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	line = get_line(fd, buffer, rest);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	rest = update_next_line(line);
	return (line);
}
