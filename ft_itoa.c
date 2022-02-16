/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:43:55 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/18 15:43:46 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:03:06 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/14 13:43:44 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	ft_count_num(int n)
{
	unsigned int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	unsigned int	i;
	char			*itoa;
	long			n;

	n = (long) nb;
	i = ft_count_num (n);
	itoa = (char *)malloc(sizeof(char) * i + 1);
	if (itoa == NULL)
		return (0);
	itoa[i--] = '\0';
	if (n == 0)
		itoa[0] = '0';
	if (n < 0)
	{
		itoa[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		itoa[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}

/*int main()
{
	printf ("%s", ft_itoa(0));
}*/
