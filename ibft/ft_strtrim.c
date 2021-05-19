/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:27:00 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/09 16:37:13 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
	{
		s2 = ft_substr("\0", 0, 0);
		return (s2);
	}
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	s2 = ft_substr(s1, 0, len + 1);
	return (s2);
}
