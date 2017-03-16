/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 14:53:46 by mtrudel           #+#    #+#             */
/*   Updated: 2017/03/09 11:04:54 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include "./libft/libft.h"
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_coordonnees
{
	int	x;//abscisses
	int	y;//ordonnées
	int	z;//hauteur
}		t_coordonnees;

int		ft_parsing(char *str);
int		ft_usage(int code_err);

#endif
