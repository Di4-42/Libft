/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:31:33 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/17 22:37:22 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	char			*str;
	unsigned int	i;

	str = (char *)s;
	i = 0;
	r = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!r)
		return (0);
	while (s[i])
	{
		r[i] = f(i, str[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
