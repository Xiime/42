/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 08:53:25 by mtrudel           #+#    #+#             */
/*   Updated: 2017/02/17 18:05:09 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		my_key_funct(int keycode)
{
	printf("key event %d\n", keycode);
	return (0);
}

int		main(int argc, char **argv)
{
	void	*mlx;
	void	*win;
	int		x;

	if (argc != 2)
	{
		ft_usage(1); // fonction a creer pour renvoyer l'usage du programme en passant en parametre son code d'erreur >> ft_usage(int code_err); peut aussi faire return (ft_usage(int code_err)); 1 = usage du programme,
		return (-1);
	}
	if (!ft_parsing) // ft_parsing(argv[1]) >> argv[1] == le nom du fichier a ouvrir, le parsing va faire tous les tests pour verifier si le fichier existe et qu'il corrspond a ce qu'on veut
		return (-1);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 800, 800, "mlx 42");
	x = 100;
	while (x < 700)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FF00FF);
		x++;
	}
	mlx_key_hook(win, my_key_funct, NULL);
	mlx_loop(mlx);
	return (0);
}
