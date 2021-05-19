/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:45:47 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/06 17:47:56 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	fin;

	srcsize = 0;
	fin = 0;
	while (dst[fin] && fin < dstsize)
		fin++;
	while (src[srcsize] && (fin + srcsize + 1) < dstsize)
	{
		dst[fin + srcsize] = src[srcsize];
		srcsize++;
	}
	if (fin != dstsize)
		dst[fin + srcsize] = '\0';
	return (fin + ft_strlen(src));
}
