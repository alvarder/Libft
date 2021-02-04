/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:55:57 by agarcia-          #+#    #+#             */
/*   Updated: 2021/01/27 16:16:59 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	a;
	char			*src2;
	char			*dst2;

	src2 = (char *)src;
	dst2 = (char *)dst;
	a = 0;
	while (a < n)
	{
		if (src2[a] == c)
		{
			dst2[a] = src2[a];
			a++;
			return (&dst2[a]);
		}
		else
		{
			dst2[a] = src2[a];
			a++;
		}
	}
	return (0);
}
