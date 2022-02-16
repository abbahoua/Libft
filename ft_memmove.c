/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:15:18 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/15 18:43:13 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*ds;
	char		*sc;
	size_t		i;

	if (!dest && !src)
		return (0);
	i = 0;
	sc = (char *)src;
	ds = (char *)dest;
	if (ds > sc)
	{
		while (len > 0)
		{
			ds[len - 1] = sc[len - 1];
			len--;
		}
	}
	while (len > i)
	{
		ds[i] = sc[i];
		i++;
	}
	return (ds);
}

/*int	main(void)
{
	char s[] = "abcdef";
	char s1[] = "abcdef";
	ft_memmove(s+, s+2, 5);
	memmove(s1+3, s1+2, 5);
	printf("%s\n", s);
	printf("%s\n", s1);
	return (0);
}*/
