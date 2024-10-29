/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:56:27 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/28 21:15:44 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int		i;
	int		k;
	int		size;

	if (!*to_find)
		return (str);
	if (n == 0)
		return (NULL);
	size = ft_strlen(to_find);
	i = 0;
	while (str[i] && i < n)
	{
		k = 0;
		while (str[i + k] && to_find[k] && str[i + k] == to_find[k])
		{
			k++;
		}
		if (k == size)
			return (str + i);
		++i;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%s", ft_strnstr("Hello woworld 1234", "world", 16));
	return 0;
}
