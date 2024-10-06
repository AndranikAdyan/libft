/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:56:27 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/02 21:15:49 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int		i;
	int		k;
	int		size;

	if (!to_find[0])
		return (str);
	size = ft_strlen(to_find);
	i = 0;
	k = 0;
	while (str[i] && i < n)
	{
		if (str[i] == to_find[k])
		{
			k++;
			if (k == size)
				return (str + i - size + 1);
		}
		else
		{
			i = i - k;
			k = 0;
		}
		i++;
	}
	return (0);
}