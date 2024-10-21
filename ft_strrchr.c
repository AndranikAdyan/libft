/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:48:22 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/21 19:00:11 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include "stdio.h"
#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	// char	*str;

	// i = ft_strlen(s) - 1;
	i = strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			// str = (char *)s + i;
			return ((char *)s + i);
		}
		--i;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
