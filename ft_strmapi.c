/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:29:58 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/13 15:31:45 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fraiche;

	i = 0;
	if (!s || !f)
		return (NULL);
	fraiche = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (fraiche == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fraiche[i] = f(i, s[i]);
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
