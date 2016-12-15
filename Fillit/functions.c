/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqueverd <rqueverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:30:22 by rqueverd          #+#    #+#             */
/*   Updated: 2016/12/14 14:54:18 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_sqrt(int nb)
{
	int x;

	x = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x * x < nb)
		x++;
	return (x);
}

char		*ft_read(int argc, char **argv)
{
	int		fd;
	char	*str1;
	char	buf[BUFFER + 1];
	int		ret;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source file\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUFFER)) != 0)
	{
		str1 = buf;
		buf[ret] = '\0';
	}
	if (buf[ret] == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	str1[BUFFER] = '\0';
	close(fd);
	return (str1);
}

int			ft_nb_tetriminos(char *str2)
{
	return (ft_strlen(str2) / 21 + 1);
}
