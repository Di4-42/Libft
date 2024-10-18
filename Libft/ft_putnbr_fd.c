/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:31:27 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/17 20:48:22 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nombre;

	nombre = n;
	if (nombre < 0)
	{
		write(fd, "-", 1);
		nombre = -nombre;
	}
	if (nombre >= 10)
		ft_putnbr_fd(nombre / 10, fd);
	c = (nombre % 10) + 48;
	write(fd, &c, 1);
}
/*
int main(void)
{
	ft_putnbr_fd(-42320, 1);
	return(0);
}*/
