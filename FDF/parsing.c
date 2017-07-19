/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 14:58:48 by mtrudel           #+#    #+#             */
/*   Updated: 2017/05/09 14:50:37 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	ft_checkchar(int fd)
{
	char	*line;
	int		i;

	while (get_next_line(fd, &line))
	{
		i = 0;
		while (line[i] != '\0')
		{
			if ((line[i] > 57 || line[i] < 48) && line[i] != ' ' && line[i] != '-')
				return (-1);
			i++;
		}
	}
	if (line)
		free(line);
	return (1);
}

static int	ft_if_void(int fd)
{
	char	*line;

	if ((get_next_line(fd, &line)) == -1)
		return (-1);
	return (0);
}

int			ft_parsing(char *str)
{
	char	*filed;
	int	fd;

	filed = (char *)malloc(sizeof(char) * 5);
	filed = ".fdf";
	if (ft_strchr(str, '.') == NULL)
		return (ft_usage(2));
	if (ft_strcmp(ft_strchr(str, '.'), filed) != 0)
	{
		free(filed);
		return (ft_usage(2));
	}
	if ((fd = open(str, O_RDONLY)) == -1)
		return (ft_usage(4));
	if ((ft_if_void(fd)) == -1)
		return (ft_usage(3));
	if ((ft_checkchar(fd)) == -1)
		return (ft_usage(5));
	if (fd > 0)
		close(fd);
	return (1);
}
