/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:37:48 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/01 17:21:57 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;
	int		a;
	int		b;

	a = 0;
	b = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(len * sizeof(char));
	while (s2[b] != '\0' && s3 != '\0')
	{
		while (s1[a] != '\0')
		{
			s3[a] = s1[a];
			a++;
		}
		while (s2[b] != '\0')
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	return (s3);
}
