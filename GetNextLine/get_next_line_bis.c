/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:24:31 by mtrudel           #+#    #+#             */
/*   Updated: 2017/02/09 08:22:50 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		inter_gnl(char **resu, char **tmp, char **line)
{
	*line = ft_strnew(ft_go_to_fchar(*resu, '\n'));
	*line = ft_strncpy(*line, *resu, ft_go_to_fchar(*resu, '\n'));
	if (((int)ft_strlen(*resu) - 1) >= ft_go_to_fchar(*resu, '\n'))
	{
		*tmp = ft_strdup(ft_strchr(*resu, '\n') + 1);
		*resu = ft_strcpy(*resu, *tmp);
		ft_strdel(tmp);
	}
}

static int		ft_last_iter(char **resu, char **tmp, char **line)
{
	*line = ft_strnew(ft_go_to_fchar(*resu, '\0'));
	*line = ft_strncpy(*line, *resu, ft_go_to_fchar(*resu, '\0'));
	if (((int)ft_strlen(*resu))
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	static char		*resu;
	char			*tmp;

	if (fd < 0 || BUFF_SIZE < 1 || (!resu && !(resu = ft_strnew(1))))
		return (-1);	
	if (ft_strchr(resu, '\n') != NULL)
	{
		inter_gnl(&resu, &tmp, line);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		resu = ft_strfreejoin(resu, buf);
		if (ft_strchr(buf, '\n') != NULL)
		{
			inter_gnl(&resu, &tmp, line);
			return (2);
		}
	}
	if (resu != NULL && ft_strchr(resu, '\n') == NULL && ret == 0)
	{
		*line = ft_strnew(ft_strlen(resu));
		*line = ft_strcpy(*line, resu);
		resu = NULL;
		return (3);
	}
	if (resu)
		ft_strdel(&resu);
	return (0);
}
