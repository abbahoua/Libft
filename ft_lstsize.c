/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:42:33 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/22 16:46:00 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	size = 0;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}

/*int main()
{
	t_list *lst;
	lst = malloc(sizeof(t_list));	
	lst->next = NULL;

	t_list *lst2;
	lst2->next = NULL;
	lst->next = lst2;

	printf("%d", ft_lstsize(lst));
}*/
