/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:29:01 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/15 19:14:31 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*cal;

	cal = (void *)malloc(size * count);
	if (!cal)
		return (0);
	i = 0;
	while (i < count * size)
	{
		cal[i] = 0;
		i++;
	}
	return (cal);
}
