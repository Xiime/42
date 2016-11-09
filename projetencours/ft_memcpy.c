/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:04:15 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/08 11:29:13 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
