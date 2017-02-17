/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 14:53:46 by mtrudel           #+#    #+#             */
/*   Updated: 2017/02/17 15:28:59 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include "./libft/libft.h"
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_parsing(char *str);
int		ft_usage(int code_err);

#endif
