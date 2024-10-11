/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:26:50 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/11 15:42:32 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int nb)
{
	int	n;
	int	count;

	n = 1;
	count = 0;
	while (nb / n >= 10)
	{
		n *= 10;
		++count;
	}
	return (count);
}

char	*get_num(char *num, int nb, int n, int i)
{
	while (n > 0)
	{
		num[i] = (nb / n) + '0';
		nb = nb % n;
		n /= 10;
		i++;
	}
	return (num);
}

char	*ft_itoa(int nb)
{
	int		n;
	int		i;
	char	*num;

	num = (char *)malloc(get_len(nb) * sizeof(char));
	if (nb == -2147483648)
	{
		num = "-2147483648";
		return (num);
	}
	i = 0;
	if (nb < 0)
	{
		num[i] = '-';
		i++;
		nb = -nb;
	}
	n = 1;
	while (nb / n >= 10)
		n *= 10;
	num = get_num(num, nb, n, i);
	return (num);
}
