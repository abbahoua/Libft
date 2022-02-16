/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:03:00 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/11 17:30:26 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	lch;
	char	*s;

	i = 0;
	j = -1;
	lch = c;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == lch)
			j = i;
		i++;
	}
	if (s[i] == c)
		return (s + i);
	else if (j == -1)
		return (0);
	return (&s[j]);
}

/*int main()
{
	const char s[] = "himid";
	printf("%s \n",  ft_strrchr(s, 0));
	printf("%s",  strrchr(s, 0));
}*/
