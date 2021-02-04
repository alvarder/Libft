/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:27:00 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/03 17:15:48 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	prim;
	size_t	ult;

	if (!s1 || !set)
		return (NULL);
	prim = 0;
	while ((s1[prim] && ft_strchr(set, s1[prim])))
		prim++;
	if ((ult = ft_strlen(&s1[prim])))
		while ((s1[prim + ult - 1] && ft_strchr(set, s1[prim + ult - 1])))
			ult--;
	return (ft_substr(s1, s1[prim], ult));
}
