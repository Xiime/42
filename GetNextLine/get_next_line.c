/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:24:31 by mtrudel           #+#    #+#             */
/*   Updated: 2016/12/14 19:49:51 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	buf[BUFFER + 1];
	int		ret;
	char	*tmp;
	size_t	i;

	tmp = "";
	i = 0;
	while ((ret = read(fd, buf, BUFFER)) != 0)
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(tmp, buf);
		if (ft_strchr(tmp, '\n') != NULL)
		{
			while (tmp[i] != '\n')
				i++;
			*line = ft_strnew(i);
			ft_strncpy(*line, tmp, i);
			return (1);
		}
	}
	return (0);
}
