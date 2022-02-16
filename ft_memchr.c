/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:36:47 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/18 14:59:40 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*mem;

	chr = (unsigned char)c;
	mem = (unsigned char *)s;
	i = 0;
	if (i == n)
		return (0);
	while (i < n)
	{
		if (mem[i] == chr)
			return (&(mem[i]));
		i++;
	}
	return (0);
}

/*int main()
{
	const void *s = "hamid A jamid";
	printf ("%s \n", ft_memchr(s, 'A', 11));
	printf ("%s", memchr(s, 'A', 11));

}*/
