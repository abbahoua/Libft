/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:36:09 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/10 13:07:41 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	int fd = open("foo.txt", O_WRONLY | O_CREAT);
	ft_putchar_fd('k',fd);	
	return (0);
}*/
