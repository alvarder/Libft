/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:53:28 by agarcia-          #+#    #+#             */
/*   Updated: 2021/01/27 19:21:08 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	a;
	unsigned int	b;
	char			*larga;

	a = 0;
	b = 0;
	larga = (char *)haystack;
	while (haystack[a] != '\0' && len > a && needle[b + 1] != '\0')
	{
		if ((haystack[a] == needle[b]) && (haystack[a + 1] == needle[b + 1]))
		{
			a++;
			b++;
		}
		else
			a++;
	}
	if (needle[b + 1] == '\0')
		return (&larga[a - b]);
	else
		return (0);
}
