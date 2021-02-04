/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:53:35 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/01 17:09:04 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*s2;

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	s2 = malloc(a * sizeof(char));
	a = 0;
	while (s1[a] != '\0')
	{
		s2[a] = s1[a];
		a++;
	}
	return (s2);
}
