/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 11:32:06 by mtrudel           #+#    #+#             */
/*   Updated: 2017/06/19 17:22:22 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_image(struct s_window* window, struct s_image* image)
{
	mlx_put_image_to_window(window->mlx, window->win, image->img, 0, 0);
	mlx_key_hook(window->win, escape_key, NULL);
	mlx_loop(window->mlx);
}
