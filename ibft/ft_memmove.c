/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:38:51 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/15 19:00:20 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dst2;
	char			*src2;
	unsigned int	a;

	dst2 = (char *)dst;
	src2 = (char *)src;
	a = 0;
	if (dst > src)
	{
		while (len--)
			dst2[len] = src2[len];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
