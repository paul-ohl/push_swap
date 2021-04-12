/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:52:52 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:39:10 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char		*ft_strjoin_freefirst(char const *s1, char const *s2)
{
	char	*buffer;

	buffer = ft_strjoin(s1, s2);
	if (s1)
		free((void *)s1);
	return (buffer);
}

static int	check_rest(char **rest, char **line)
{
	long	n;

	n = ft_strchr(*rest, '\n') - *rest;
	if (*rest && n >= 0)
	{
		*line = (char *)malloc(sizeof(**line) * (n + 1));
		if (*line)
		{
			ft_strncpy(*line, *rest, n);
			*rest = ft_strreplace(*rest, *rest + n + 1);
			if (*rest)
				return (1);
		}
		return (-1);
	}
	if (!*rest)
	{
		*rest = (char *)malloc(sizeof(**rest));
		if (!*rest)
			return (-1);
		(*rest)[0] = 0;
	}
	return (0);
}

int			final_return(char **line, char **rest, char *temp)
{
	if (temp)
		free(temp);
	if (rest)
	{
		*line = ft_strdup(*rest);
		free(*rest);
		*rest = 0;
		if (*line)
			return (0);
	}
	return (-1);
}

int			read_input(char **line, char **rest, char *temp, int fd)
{
	int	n;

	ft_bzero(temp, sizeof(*temp) * BUFFER_SIZE + 1);
	n = read(fd, temp, BUFFER_SIZE);
	if (n > 0)
	{
		temp[n] = 0;
		*rest = ft_strjoin_freefirst(*rest, temp);
		if (!*rest)
			free(temp);
		if (!*rest)
			return (-1);
	}
	else if (n == 0)
		return (final_return(line, rest, temp));
	return (-1);
}

int			get_next_line(int fd, char **line)
{
	static char	*rest = NULL;
	char		*temp;
	int			n;

	if (read(fd, 0, 0) == -1 || !line || BUFFER_SIZE <= 0)
		return (-1);
	temp = (char *)malloc(sizeof(*temp) * BUFFER_SIZE + 1);
	if (!temp)
		return (-1);
	while ((check_rest(&rest, line)) == 0)
	{
		n = read_input(line, &rest, temp, fd);
	}
	if (rest)
		return (1);
	return (-1);
}
