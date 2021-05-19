/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:39:25 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/06 16:33:44 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned int	b;
	char			*str;

	a = (unsigned char)c;
	str = (char *)s;
	b = 0;
	while (b < n)
	{
		if (str[b] == c)
		{
			return (&str[b]);
		}
		else
			b++;
	}
	return (0);
}
