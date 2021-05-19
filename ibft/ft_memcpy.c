/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:04:24 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/11 17:05:27 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dst2;
	char			*src2;
	unsigned int	a;

	dst2 = (char *)dst;
	src2 = (char *)src;
	a = 0;
	while (a < n)
	{
		dst2[a] = src2[a];
		a++;
	}
	return (dst);
}
