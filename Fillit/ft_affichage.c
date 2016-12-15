/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affichage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqueverd <rqueverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:24:24 by mtrudel           #+#    #+#             */
/*   Updated: 2016/12/15 16:52:41 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar(src[i]);
		i++;
	}
}

void	ft_affiche_tab(char **tableau, int taille)
{
	int	i;

	i = 0;
	while (i < taille)
	{
		ft_putstr(tableau[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putstr(tableau[i]);
}

void	ft_free_map(char **tableau, int taille)
{
	int		i;

	i = 0;
	while (i < taille)
	{
		free(tableau[i]);
		i++;
	}
	free(tableau);
}
