/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:09:13 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/19 09:26:05 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*char tst(unsigned int i, char c)
{	
	return(c + i);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!f || !s)
		return (0);
	str = (char *)malloc(sizeof(char) *(ft_strlen(s) + 1));
	if (!str || !f)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

/*int main()
{
	char const s[] = "abc";
	char (*f) (unsigned int, char) = &tst;
	printf ("%s", ft_strmapi(s, f));
}*/
