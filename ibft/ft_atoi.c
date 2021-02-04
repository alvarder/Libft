/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:05:13 by agarcia-          #+#    #+#             */
/*   Updated: 2021/01/28 16:41:51 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int a;
	int sig;

	sig = 0;
	a = 0;
	num = 0;
	while ((str[a] >= 48 && str[a] <= 57) || (str[a] == 43) || (str[a] == 45))
	{
		if (str[a] == 45)
		{
			sig++;
			a++;
		}
		if (str[a] >= 48 && str[a] <= 57)
		{
			num = num * 10;
			num = num + (str[a] - 48);
			a++;
		}
	}
	if (sig == 1)
		num = num * -1;
	return (num);
}
