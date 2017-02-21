/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 14:58:48 by mtrudel           #+#    #+#             */
/*   Updated: 2017/02/17 18:04:58 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_checkchar(char *line)
{
	//il faut integrer gnl dans la libft et il va nous renvoyer line correctement. a partir de line ref : cahier de note
}

int		ft_parsing(char *str)
{
	char	filed[5];
	int	fd;

	filed = ".fdf\0";
	if (ft_strcmp(ft_strchr(str, '.'), filed) != 0)
		return (ft_usage(2));
	if (!(fd = open(str, O_RDONLY)))
		return (ft_usage(4));
	else if (fd > 0)
		close(fd);
	
}
