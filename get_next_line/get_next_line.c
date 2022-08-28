/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:06:48 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/07 12:24:32 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char		*backup;
	char			*buffer;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (buffer == 0)
		return (NULL);
	if (backup == 0)
		backup = ft_strdup("");
	line = ft_line(fd, &buffer, &backup);
	ft_free(&buffer);
	return (line);
}
