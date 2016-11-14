/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:58:00 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/13 15:41:47 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fraiche;
	size_t	i;
	size_t	len;
	size_t	deb;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) - 1;
	deb = 0;
	while (ft_iswhitespace((int)s[i]))
		i++;
	if (i == len + 1)
	{
		fraiche = "";
		return (fraiche);
	}
	while (ft_iswhitespace((int)s[len]))
		len--;
	fraiche = malloc(sizeof(char) * (len - i + 2));
	if (!fraiche || s == NULL)
		return (NULL);
	fraiche = ft_strsub(s, i, ((len - i) + 1));
	return (fraiche);
}
