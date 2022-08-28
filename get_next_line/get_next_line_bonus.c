/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:08:47 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/07 12:24:26 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	ft_free(char **tmp)
{
	free(*tmp);
	*tmp = NULL;
}

static char	*ft_extract(char **backup)
{
	int		x;
	char	*line;
	char	*temp;

	x = 0;
	while ((*backup)[x] != '\0' && (*backup)[x] != '\n')
		x++;
	temp = *backup;
	line = ft_substr(temp, 0, x + 1);
	*backup = ft_strdup(&(*backup)[x + 1]);
	ft_free(&temp);
	return (line);
}

static int	ft_read_fd(int fd, char **buffer, char **backup)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (ft_strchr(*backup, '\n') == 0 && bytes_read != 0)
	{
		bytes_read = read(fd, *buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (bytes_read);
		(*buffer)[bytes_read] = '\0';
		temp = *backup;
		*backup = ft_strjoin(temp, *buffer);
		ft_free(&temp);
	}
	return (bytes_read);
}

static char	*ft_line(int fd, char **buffer, char **backup)
{
	int		bytes_read;
	char	*temp;

	if (ft_strchr(*backup, '\n') != 0)
		return (ft_extract(backup));
	bytes_read = ft_read_fd(fd, buffer, backup);
	if ((bytes_read == 0 || bytes_read == -1) && **backup == 0)
	{
		ft_free(backup);
		return (NULL);
	}
	if (ft_strchr(*backup, '\n') != 0)
		return (ft_extract(backup));
	if (ft_strchr(*backup, '\n') == 0 && **backup != 0)
	{
		temp = ft_strdup(*backup);
		ft_free(backup);
		return (temp);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		*backup[OPEN_MAX];
	char			*buffer;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!backup[fd])
		backup[fd] = ft_strdup("");
	line = ft_line(fd, &buffer, &backup[fd]);
	ft_free(&buffer);
	return (line);
}
