/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:55:46 by agarcia-          #+#    #+#             */
/*   Updated: 2021/02/01 17:07:16 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;

	if (count == 0 || size == 0)
		return (0);
	else
	{
		ptr = malloc(count * size);
		ft_bzero(ptr, (count * size));
		return (ptr);
	}
}
