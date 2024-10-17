/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/17 21:29:34 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	(void)content;
}

void	*f(void *content)
{
	*(int *)content *= 10;
	return (content);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	t_list	*tmp;
	t_list	*lst;
	t_list	*new_lst;

	a = 10;
	b = 11;
	c = 12;
	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	new_lst = ft_lstmap(lst, f, del);
	tmp = new_lst;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	(void)argc;
	(void)argv;
	return (0);
}
