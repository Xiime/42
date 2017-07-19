/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 13:48:27 by mtrudel           #+#    #+#             */
/*   Updated: 2017/06/20 13:53:04 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>
#include "fdf.h"

int		main(int argc, char **argv)
{
	struct	s_window window;
	struct	s_image image;
	struct	s_coordonnees coo;

	if (argc != 2)
		return (ft_usage(1));
	if (!ft_parsing(argv[1]))
		return (-1);
	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, 800, 800, "mlx 42");
	image.img = mlx_new_image(window.mlx, 800, 800);
	image.data = (int *)mlx_get_data_addr(image.img, &image.bpp, &image.sl, &image.ed);
	coo.x = 100;
	coo.y = 100;
	while (coo.y < 400)
	{
		while (coo.x < 400)
		{
			image.data [(coo.y * 800) + coo.x] = (int)0x00F3006E;
			coo.x++;
		}
		coo.x = 100;
		coo.y++;
	}
	print_image(&window, &image);
	return (0);
}
