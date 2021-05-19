/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:05:13 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/15 17:40:58 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	signoss(const char *str)
{
	int a;

	a = 0;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\r' ||
			str[a] == '\v' || str[a] == '\f' || str[a] == ' ')
		a++;
	return (a);
}

int	avanzar(const char *str)
{
	int a;
	int signos;
	int p;
	int n;

	n = 0;
	p = 0;
	signos = 0;
	a = signoss(str);
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == 43)
			p++;
		else
			n++;
		signos++;
		a++;
	}
	if (signos > 1)
		return (100);
	if (signos == 1 && p == 1)
		return (a);
	if (signos == 1 && n == 1)
		return (-a);
	return (a);
}

int	ft_atoi(const char *str)
{
	int num;
	int a;
	int sig;

	a = avanzar(str);
	num = 0;
	if (a == 100)
		return (0);
	if (a < 0)
	{
		a = a * -1;
		sig = 1;
	}
	while ((str[a] >= 48 && str[a] <= 57))
	{
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
