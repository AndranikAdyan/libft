/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:57:42 by aadyan            #+#    #+#             */
/*   Updated: 2024/08/13 18:59:16 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (i < num)
	{
		p[i++] = value;
	}

	return (ptr);
}
