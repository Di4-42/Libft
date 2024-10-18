/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:18:47 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/07 23:38:23 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s && d < s + len)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
/*
int	main(void)
{
	char source[] = "cardi";
	char desti[10];
	ft_memmove(desti + 2, source, 4);
	printf("%s\n", desti);
	return(0);
}*/
