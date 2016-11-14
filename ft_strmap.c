/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 08:45:15 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/14 18:30:11 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fraiche;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fraiche = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (fraiche == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fraiche[i] = f(s[i]);
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
