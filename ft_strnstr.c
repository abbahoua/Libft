/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:22:23 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/12 21:47:59 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	n;
	size_t	h;

	h = 0;
	n = 0;
	if (nee[n] == 0)
		return ((char *)hay);
	while (hay[h])
	{
		n = 0;
		while ((h + n) < len && hay[n + h] == nee[n])
		{
			if (nee[n] == 0 && hay[n + h] == 0)
				return ((char *)&hay[h]);
			n++;
		}
		if (nee[n] == 0)
			return ((char *)hay + h);
		h++;
	}
	return (0);
}

/*int main()
{
	char hay[30] = "hamid";
	char nee[10] = "id";
	printf("%s \n", ft_strnstr(hay, nee, -1));
	printf("%s \n", strnstr(hay, nee, -1));
}*/
