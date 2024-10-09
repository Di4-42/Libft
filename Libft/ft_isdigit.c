/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:31:31 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/04 11:32:16 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)

{
	while (c >= 0 && c <= 9)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int c = 9;
	printf("%d\n", ft_isdigit(c));
	return(0);
}*/
