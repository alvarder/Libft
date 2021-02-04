/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:45:47 by agarcia-          #+#    #+#             */
/*   Updated: 2021/01/27 17:07:11 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	dstsizefin;
	int		a;
	int		b;

	b = dstsize;
	a = 0;
	srcsize = ft_strlen(src);
	dstsizefin = srcsize + (dstsize);
	while (src[a] != '\0')
	{
		dst[b] = src[a];
		a++;
	}
	return (dstsizefin);
}
