/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:37:47 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/14 18:26:10 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	fraiche = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) - 1);
	if (!fraiche)
		return (NULL);
	ft_strcpy(fraiche, s1);
	ft_strcat(fraiche, s2);
	return (fraiche);
}
