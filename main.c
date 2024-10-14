/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/14 17:01:44 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int a = 10;
	int b = 11;

	t_list *lst =  ft_lstnew(&a);
	ft_lstadd_front(&lst, ft_lstnew(&b));

	printf("%d, %d\n", *(int *)lst->content, *(int *)lst->next->content);
	(void)argc;
	(void)argv;
	return (0);
}
