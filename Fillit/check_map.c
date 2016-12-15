/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqueverd <rqueverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:13:49 by rqueverd          #+#    #+#             */
/*   Updated: 2016/12/13 18:17:48 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int				ft_check_char_bis(char *str1)
{
	if ((str1[ft_strlen(str1) - 1] != '\n') ||\
		((int)ft_strlen(str1) / 21 + 1 > 27))
		return (0);
	if ((str1[ft_strlen(str1) - 1] == '\n') &&\
		(str1[ft_strlen(str1) - 2] == '\n'))
		return (0);
	return (1);
}

int				ft_check_char_tetriminos(char *str1, int i)
{
	int multiplicateur;
	int i_mult;
	int cpt;

	multiplicateur = 1;
	i_mult = 0;
	cpt = 1;
	if (ft_check_char_bis(str1) == 0)
		return (0);
	while (str1[i] != '\0')
	{
		if (str1[i] != '.' && str1[i] != '#' && str1[i] != '\n')
			return (0);
		if (str1[i] == '\n' && (str1[i + 1] == '\n' || str1[i + 1] == '\0'))
		{
			if (i != (19 * multiplicateur) + (i_mult * 2))
				return (0);
			multiplicateur++;
			i_mult++;
			cpt++;
		}
		i++;
	}
	return (1);
}

int				ft_check_newline(char *str1)
{
	int cmpt;

	cmpt = 20;
	while (str1[cmpt] != '\0' && cmpt < (int)ft_strlen(str1))
	{
		if (str1[cmpt] != '\n')
			return (0);
		cmpt = cmpt + 21;
	}
	if (str1[(int)ft_strlen(str1)] != '\0')
		return (0);
	return (1);
}

int				ft_check_sharps_tetriminos(char *str1, int i)
{
	int count_sharp;

	count_sharp = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == '#')
			count_sharp++;
		if (str1[i] == '\n' && str1[i + 1] == '\n')
		{
			if (count_sharp != 4)
				return (0);
			count_sharp = 0;
		}
		i++;
	}
	return (1);
}

int				ft_check_links(char *str1, int i)
{
	int	count_links;
	int	count;

	count_links = 0;
	count = 20;
	while (i < (int)ft_strlen(str1))
	{
		count_links = 0;
		while ((i != count + 1) && (i < (int)ft_strlen(str1)))
		{
			if (str1[i] == '#' && str1[i + 1] == '#' && (i + 1 < count + 1))
				count_links++;
			if (str1[i] == '#' && str1[i + 5] == '#' && (i + 5 < count + 1))
				count_links++;
			if (str1[i] == '#' && str1[i - 1] == '#' && (i - 1 > count - 21))
				count_links++;
			if (str1[i] == '#' && str1[i - 5] == '#' && (i - 5 > count - 21))
				count_links++;
			i++;
		}
		if (count_links != 6 && count_links != 8)
			return (0);
		count = count + 21;
	}
	return (1);
}
