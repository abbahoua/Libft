/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:47:27 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/03 17:32:30 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	mem;
	char	*p;

	mem = c;
	p = (char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = mem;
		i++;
	}
	return (p);
}
