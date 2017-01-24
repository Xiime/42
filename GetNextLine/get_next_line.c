/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:24:31 by mtrudel           #+#    #+#             */
/*   Updated: 2017/01/24 14:21:40 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_go_to_lbsn(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	static char		*resu;
	size_t			i;
	char			*tmp;

	if (!resu)
		resu = ft_strdup("");
	i = 0;
	if (ft_strchr(resu, '\n') != NULL && ft_strlen(resu) > 1)
	{
		*line = ft_strnew(ft_go_to_lbsn(resu));
		*line = ft_strncpy(*line, resu, ft_go_to_lbsn(resu));
		if (((int)ft_strlen(resu) - 1) >= ft_go_to_lbsn(resu))
		{
			tmp = ft_strdup(ft_strchr(resu, '\n') + 1);
			resu = ft_strdup(tmp);
			ft_strdel(&tmp);
		}
		return (1);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		resu = ft_strjoin(resu, buf);
		if (ft_strchr(buf, '\n') != NULL)
		{
				*line = ft_strnew(ft_go_to_lbsn(resu));
				*line = ft_strncpy(*line, resu, ft_go_to_lbsn(resu));
				if (((int)ft_strlen(resu) - 1) >= ft_go_to_lbsn(resu))
				{
					tmp = ft_strdup(ft_strchr(resu, '\n') + 1);
					resu = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				return (1);
		}
	}
	if (ret == 0 && strchr(resu, '\n') == NULL && resu != NULL)
	{
		*line = ft_strnew(ft_strlen(resu));
		*line = ft_strncpy(*line, resu, ft_strlen(resu));
		ft_strdel(&resu);
		return (1);
	}
	return (0);
}
