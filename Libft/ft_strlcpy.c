/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:41:10 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/13 20:21:27 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	l;

	l = ft_strlen(src);
	if (l + 1 < dstsize)
		ft_memcpy(dst, src, l + 1);
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (l);
}
/*
int main(void)
{
    char dest[20];
    const char *src = "Hello, World!";
    size_t len;

    // Cas 1 : Destination de taille suffisante
    len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Test 1: %s (longueur : %zu)\n", dest, len);

    // Cas 2 : Destination plus petite que la source
    len = ft_strlcpy(dest, src, 6);
    printf("Test 2: %s (longueur : %zu)\n", dest, len);

    // Cas 3 : Destination de taille 0
    len = ft_strlcpy(dest, src, 0);
    printf("Test 3: %s (longueur : %zu)\n", dest, len);

    // Cas 4 : Source vide
    src = "";
    len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Test 4: %s (longueur : %zu)\n", dest, len);
   return 0;
}*/
