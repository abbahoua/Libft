/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:55:38 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/11 11:24:23 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;
	char	*str;

	chr = c;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == chr)
			return (&(str)[i]);
		i++;
	}
	if (str[i] == c)
		return (str + i);
	else
		return (0);
}

/*int main()
{
	const char s[] = "hamid";
	printf("%s",  ft_strchr(s, 'z'));
	printf("%s",  strchr(s, 'z'));
}*/
