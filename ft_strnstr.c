/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:56:27 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/29 11:36:55 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int		i;
	int		k;
	int		size;

	if (n == 0)
		return (NULL);
	if (!*to_find)
		return (str);
	size = ft_strlen(to_find);
	i = 0;
	while (str[i] && i < n)
	{
		k = 0;
		while (str[i + k] && to_find[k] && \
			str[i + k] == to_find[k] && i + k < n)
		{
			k++;
		}
		if (k == size)
			return (str + i);
		++i;
	}
	return (0);
}
