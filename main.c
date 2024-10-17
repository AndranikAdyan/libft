/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/17 20:31:41 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	(void)content;
}

void	f(void *content)
{
	*(int *)content *= 10;
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	t_list	*tmp;
	t_list	*lst;

	a = 10;
	b = 11;
	c = 12;
	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	ft_lstiter(lst, f);
	tmp = lst;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&lst, del);
	(void)lst;
	(void)argc;
	(void)argv;
	return (0);
}
