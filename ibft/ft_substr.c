/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:05:20 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/01 19:07:51 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			init;
	char			*str;
	int				a;
	unsigned int	b;

	a = 0;
	b = 0;
	init = (char)start;
	str = malloc(len * sizeof(char));
	while (s[a] != '\0' && str != '\0')
	{
		if (s[a] == init)
		{
			while (b < len)
			{
				str[b] = s[a];
				a++;
				b++;
			}
			a++;
		}
		else
			a++;
	}
	return (str);
}
