/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 14:58:48 by mtrudel           #+#    #+#             */
/*   Updated: 2017/03/09 11:31:32 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_checkchar(int fd)
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
		if (line)
			free(line);
	}
	if (line)
		free(line);
	return (1);
}

int			ft_parsing(char *str)
{
	char	filed;
	int	fd;

	filed[5] = ".fdf\0";
	if (ft_strcmp(ft_strchr(str, '.'), filed) != 0)
		return (ft_usage(2));
	if (!(fd = open(str, O_RDONLY)))
		return (ft_usage(4));
	if (!(ft_checkchar(fd)))
		return (ft_usage(5));
	if (fd > 0)
		close(fd);
	return (1);
}
