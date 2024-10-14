/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/14 17:15:13 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int a = 12;
	int b = 11;
	int c = 10;

	t_list *lst;
	ft_lstadd_front(&lst, ft_lstnew(&b));
	ft_lstadd_front(&lst, ft_lstnew(&c));

	printf("%d\n", ft_lstsize(lst));
	(void)lst;
	(void)argc;
	(void)argv;
	return (0);
}
