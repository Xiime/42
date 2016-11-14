/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:12:03 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/13 16:41:09 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*fraiche;

	if (!s)
		return (NULL);
	i = 0;
	fraiche = malloc(sizeof(char) * len + 1);
	if (!fraiche)
		return (NULL);
	while (i < len)
	{
		fraiche[i] = s[start];
		i++;
		start++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
