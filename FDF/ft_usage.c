/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 09:09:52 by mtrudel           #+#    #+#             */
/*   Updated: 2017/05/04 13:43:30 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_usage(int code_err)
{
	if (code_err == 1)
		ft_putstr("usage: ./fdf source_file.fdf\n");
	else if (code_err == 2)
		ft_putstr("Une map valide doit etre un *.fdf\n");
	else if (code_err == 3)
		ft_putstr("Le fichier est vide\n");
	else if (code_err == 4)
		ft_putstr("Le fichier ne peut pas etre ouvert\n");
	else if (code_err == 5)
		ft_putstr("Il ne peut y avoir que des nombres et des espaces\n");
	return (0);
}
