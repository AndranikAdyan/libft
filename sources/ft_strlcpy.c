/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:41:38 by aadyan            #+#    #+#             */
/*   Updated: 2024/08/24 17:03:33 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;
	int					n;

	d = dst;
	s = src;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	while (s[n])
		n++;
	return (n);
}
