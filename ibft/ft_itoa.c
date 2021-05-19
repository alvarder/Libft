/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:39:10 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/17 16:54:38 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int		getlen(int nbr)
{
	int len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*num;
	int		len;

	len = getlen(nbr);
	if (!(num = malloc(sizeof(char) * (len + 1))))
		return (0);
	num[len] = '\0';
	if (nbr < 0)
		num[0] = '-';
	else if (nbr == 0)
	{
		num[0] = 48;
		num[len] = '\0';
	}
	while (nbr != 0)
	{
		--len;
		num[len] = value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (num);
}
