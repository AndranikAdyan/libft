/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:09:27 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/06 23:39:38 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*arr;
	unsigned char	*p;
	size_t			i;

	arr = (void *)malloc(nmemb * size);
	p = arr;
	i = 0;
	while (i < size)
	{
		p[i] = 0;
		++i;
	}
	return (arr);
}
