/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:25:48 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/03 17:29:38 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*sn;
	int		len;

	a = 0;
	len = ft_strlen(s);
	if (!(sn = malloc(len + 1 * sizeof(char))))
		return (0);
	while (s[a] != '\0')
	{
		sn[a] = f(a, s[a]);
		a++;
	}
	sn[a] = '\0';
	return (sn);
}
