/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:53:01 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/22 16:52:05 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*int main ()
{
	t_list *head;
	head = (t_list *)malloc(sizeof(t_list));
	head->next = NULL;

	t_list *secondary;
	head->next = secondary;

	secondary->next = NULL;
	head->next->next = secondary;

	head->next->next->next = secondary;
	ft_istadd_back(head, secondary);
}*/
