/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:33:59 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/21 19:35:36 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t' \
			|| c == '\r' || c == '\v' \
			|| c == '\f' || c == '\n');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	while (is_space(nptr[i]))
		++i;
	sign = 1;
	if (!is_digit(nptr[i]))
	{
		if (nptr[i] == '-')
			sign = -1;
		else if (nptr[i] != '+')
			return (0);
		++i;
	}
	num = 0;
	while (is_digit(nptr[i]))
	{
		num *= 10;
		num += nptr[i] - '0';
		i++;
	}
	return (sign * num);
}
