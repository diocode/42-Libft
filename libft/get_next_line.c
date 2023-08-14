/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:29:53 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/24 09:52:27 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*gnl_strjoin(char *stash, char *buffer)
{
	int		i;
	int		j;
	char	*str;

	if (!stash)
		stash = (char *) ft_calloc(1, sizeof(char));
	if (!stash || !buffer)
		return (NULL);
	if (ft_strlen(stash) + ft_strlen(buffer) == 0)
	{
		free(stash);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(stash) + ft_strlen(buffer) + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (stash[++i])
		str[i] = stash[i];
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	free(stash);
	return (str);
}

static char	*ft_reset_stash(char *stash)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (stash[i] && stash[i] != '\n' && stash[i] != '\r')
		i++;
	if (!stash[i] || stash[i] == '\r')
	{
		free(stash);
		return (NULL);
	}
	str = (char *) malloc((ft_strlen(stash) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (stash[i++])
		str[j++] = stash[i];
	str[j] = '\0';
	free(stash);
	return (str);
}

static char	*ft_getline(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i])
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_read_file(int fd, char *stash)
{
	int		bytes;
	char	*buffer;

	buffer = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(stash, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = gnl_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*stash[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash[fd] = ft_read_file(fd, stash[fd]);
	if (!stash[fd])
	{
		free(stash[fd]);
		return (NULL);
	}
	line = ft_getline(stash[fd]);
	stash[fd] = ft_reset_stash(stash[fd]);
	return (line);
}
