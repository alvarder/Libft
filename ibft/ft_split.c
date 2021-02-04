/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:29:27 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/03 17:12:34 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			contar(char const *s, char c)
{
	int num;

	num = 1;
	while (*s != '\0')
	{
		if (*s == c)
			num++;
		s++;
	}
	return (num);
}

static char	**ft_free(char **str, int count)
{
	int i;

	i = 0;
	while (1 < count + 1)
		free(str[i++]);
	free(str);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		a;
	int		cont;
	int		b;

	if (!s || !(str = (char **)malloc((contar(s, c) + 1) * sizeof(char *))))
		return (0);
	a = -1;
	cont = 0;
	while (s[++a] != '\0')
	{
		b = a;
		while (s[b] != c && s[b] != '\0')
			b++;
		if (b > a)
		{
			if (!(str[cont] = (char*)malloc(sizeof(char) * (b - a + 1))))
				return (ft_free(str, cont));
			ft_strlcpy(str[cont++], s + a, b - a + 1);
			a = b - 1;
		}
	}
	str[cont] = 0;
	return (str);
}
