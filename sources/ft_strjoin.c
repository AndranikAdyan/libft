/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:59:45 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/10 10:43:54 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		index;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	while (s1[i])
	{
		str[index] = s1[i];
		++i;
		++index;
	}
	i = 0;
	while (s2[i])
	{
		str[index] = s2[i];
		++i;
		++index;
	}
	str[index] = '\0';
	return (str);
}
