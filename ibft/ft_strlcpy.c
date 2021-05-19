/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:16:30 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/15 18:55:12 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;

	count = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < dstsize - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	if (count < dstsize)
		dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
