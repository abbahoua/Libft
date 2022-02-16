/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:03:36 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/22 11:07:02 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

/*int main()
{
	t_list *lst;
	lst = (t_list *)malloc(sizeof (t_list));
	lst->next = NULL;
	lst->content = "hamid";

	t_list *ptr;
	lst->next = ptr;
	lst->content = "jamid";

	ft_lstadd_front(&lst, ptr);
	ptr = lst;
	while (ptr != NULL)
	{
		printf ("%s", ptr->content);
		ptr = ptr->next;
	}
}*/
