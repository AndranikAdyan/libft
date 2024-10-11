/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:38:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/10/11 17:35:02 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char const *argv[])
{
	int fd = open("./a.txt", O_CREAT | O_WRONLY | O_TRUNC);
	printf("fd: %d\n", fd);
	if (fd != -1)
		ft_putnbr_fd(2147483647, fd);
	(void)argc;
	(void)argv;
	close(fd);
	return (0);
}
