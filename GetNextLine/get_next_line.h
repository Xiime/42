/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:47:08 by mtrudel           #+#    #+#             */
/*   Updated: 2016/12/14 19:50:00 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000
#include <stdio.h>
#include <unistd.h>
#include "./libft/libft.h"
#include <fcntl.h>

int		get_next_line(int fd, char **line);

#endif
