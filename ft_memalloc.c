/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 07:12:46 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/10 09:17:50 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*mem;
	size_t	i;

	i = 0;
	mem = malloc(size);
	if (size <= 0 || mem == NULL)
		return (NULL);
	while (mem[i])
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
