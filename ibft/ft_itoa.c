/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:06:14 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/03 17:22:04 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contar(int n)
{
	int dig;

	dig = 0;
	if (n < 0)
	{
		n = n * -1;
		dig++;
	}
	while (n % 10 > 0)
	{
		dig++;
		n = n / 10;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		a;

	a = contar(n);
	if (!(num = malloc((a + 1) * sizeof(char))))
		return (0);
	num[a--] = '\0';
	if (n == 0)
	{
		num[0] = 48;
		return (num);
	}
	if (n < 0)
	{
		num[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		num[a] = 48 + (n % 10);
		n = n / 10;
		a--;
	}
	return (num);
}
