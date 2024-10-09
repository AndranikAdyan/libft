/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:47:54 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/09 14:07:05 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_str(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		++i;
	}
	return (0);
}

int	get_count(char const *str, char const *chrs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (chrs[j])
		{
			if (str[i] != chrs[j])
				++count;
			++j;
		}
		++i;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	arr = (char *)malloc((get_count(s1, set) + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[end] && in_str(s1[end], set))
		--end;
	start = 0;
	while (s1[start] && in_str(s1[start], set))
		++start;
	i = 0;
	while (start + i <= end)
	{
		arr[i] = s1[start + i];
		++i;
	}
	return (arr);
}
