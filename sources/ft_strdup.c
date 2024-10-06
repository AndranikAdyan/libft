/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:12:23 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/06 20:30:10 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		++i;
	}
	s[i] = 0;
	return (s);
}