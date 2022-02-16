/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:47:19 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/18 15:16:32 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src [j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len_s;
	int		len_p;
	int		len_sum;
	char	*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_p = ft_strlen(s1);
	len_s = ft_strlen(s2);
	len_sum = len_s + len_p + 1;
	str = (char *)malloc(sizeof(char) * len_sum);
	if (str)
	{
		while (i < len_sum)
		{
			str[i] = 0;
			i++;
		}
		ft_strcat(str, (char *)s1);
		ft_strcat(str, (char *)s2);
		return (str);
	}
	return (NULL);
}
