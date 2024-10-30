/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:21:22 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/30 02:47:18 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	while (lst)
	{
		new = ft_lstnew(((*f)(lst->content)));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (!head)
			head = new;
		else
			ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
