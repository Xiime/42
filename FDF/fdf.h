/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 14:53:46 by mtrudel           #+#    #+#             */
/*   Updated: 2017/06/19 22:23:31 by mtrudel          ###   ########.fr       */
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
	int		x;//abscisses
	int		y;//ordonnées
	int		z;//profondeur(x < 0) et hauteur(x > 0) 
}				t_coordonnees;

typedef struct	s_window
{
	int		widht;//largeur fenetre
	int		height;//hauteur fenetre
	void	*mlx;//poiteur init mlx
	void	*win;//pointeur sur la fenetre d'affichage
}				t_window;

typedef struct	s_image
{
	void	*img;//pointeur sur image
	int		*data;//pointeur sur premiere valeur d'un tableau pour changer la couleur d'un pixel en hexa
	int		bpp;//bits par pixel, il ne faut pas l'initialiser juste la mettre dans mlx get data
	int		sl;//sizeline(combien de pixel par ligne), pareil 
	int		ed;//endian (sens de lecture des bits), pareil
}				t_image;

void	print_image(struct s_window* window, struct s_image* image);
int		ft_parsing(char *str);
int		ft_usage(int code_err);
int		escape_key(int key_code);

#endif
