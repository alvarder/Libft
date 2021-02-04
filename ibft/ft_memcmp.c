/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:40:04 by agarcia-          #+#    #+#             */
/*   Updated: 2021/01/27 16:26:21 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	a;
	char			*ss2;
	char			*ss1;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	a = 0;
	while (a < n)
	{
		if (ss1[a] == ss2[a])
			a++;
		else
			return (ss1[a] - ss2[a]);
	}
	return (ss1[a - 1] - ss2[a - 1]);
}
