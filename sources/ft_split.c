/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:11:25 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/11 15:23:46 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	words_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			++i;
		++count;
		while (str[i] && str[i] != c)
			++i;
	}
	if (str[i - 1] == c)
		--count;
	return (count);
}

char	**allocate_matrix(char **matrix, char const *str, char c)
{
	int	i;
	int	count;
	int	row;

	i = 0;
	count = 0;
	row = 0;
	while (str[i])
	{
		count = 0;
		while (str[i] && str[i] == c)
			++i;
		while (str[i] && str[i] != c)
		{
			++i;
			++count;
		}
		if (count)
		{
			matrix[row] = (char *)malloc((count + 1) * sizeof(char));
			row++;
		}
	}
	return (matrix);
}

char	**fill_matrix(char **arr, char const *s, char c)
{
	int	i;
	int	row;
	int	index;

	i = 0;
	row = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		index = 0;
		while (s[i] && s[i] != c)
		{
			arr[row][index] = s[i];
			++index;
			++i;
		}
		if (s[i - 1] != c)
		{
			arr[row][index] = '\0';
			++row;
		}
	}
	arr[row] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc((words_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = allocate_matrix(arr, s, c);
	arr = fill_matrix(arr, s, c);
	return (arr);
}