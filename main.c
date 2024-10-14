/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/14 17:26:08 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	t_list	*lst;

	a = 12;
	b = 11;
	c = 10;
	lst = ft_lstnew(&a);
	ft_lstadd_front(&lst, ft_lstnew(&b));
	ft_lstadd_front(&lst, ft_lstnew(&c));
	lst = ft_lstlast(lst);
	printf("%d\n", *(int *)lst->content);
	(void)lst;
	(void)argc;
	(void)argv;
	return (0);
}
