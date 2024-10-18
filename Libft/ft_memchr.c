/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:31:35 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/17 16:35:26 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
int main() 
{
    char str[] = "Hello, world!";
    char c = 'w';

    // Appel de ft_memchr pour trouver 'w'
    char *result = ft_memchr(str, c, 13);

    // Affichage du résultat
    if (result) {
        printf("Caractère trouvé : %c\n", *result);
    } else {
        printf("Caractère non trouvé\n");
    }

    return 0;
}*/
