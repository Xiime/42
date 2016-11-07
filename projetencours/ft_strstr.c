/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:51:33 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/07 17:28:49 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (ft_strlen(little) > ft_strlen(big) || little[i] == '\0')
		return (NULL);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			tmp = i;
			while (little[j] == big[tmp] && big[tmp] != '\0')
			{
				if (little[j] == '\0')
					return ((char *)big[i]);
				j++;
				tmp++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
