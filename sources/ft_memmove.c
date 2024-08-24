/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:57:06 by aadyan            #+#    #+#             */
/*   Updated: 2024/08/24 16:40:04 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (s < d)
	{
		i = n;
		while (i > 0)
		{
			d[i] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
			d[i] = s[i++];
	}
	return (dest);
}
