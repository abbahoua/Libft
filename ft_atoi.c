/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:31:27 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/22 15:21:02 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long long		nb;
	int						sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10 + str[i] - '0');
		i++;
	}
	return ((nb * sign));
}

/*int main ()
{
	char a[] ="34";
	printf("%d\n",atoi(a));
	printf("%d\n",ft_atoi(a));
}*/
