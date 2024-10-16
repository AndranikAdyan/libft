/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/17 00:36:43 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	(void)content;
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	t_list	*lst;

	a = 10;
	b = 11;
	c = 12;
	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	ft_lstclear(&lst, del);
	(void)lst;
	(void)argc;
	(void)argv;
	return (0);
}
