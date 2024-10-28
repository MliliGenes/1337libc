/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 05:23:20 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/28 09:43:58 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_nbr(int n)
{
	int				cp;
	unsigned int	pn;

	cp = 1;
	if (n < 0)
	{
		cp++;
		pn = (unsigned int)(n * -1);
	}
	else
		pn = (unsigned int)(n);
	while (pn / 10)
	{
		pn /= 10;
		cp++;
	}
	return (cp);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	pn;
	char			*str;
	int				i;

	len = nb_nbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		pn = (unsigned int)(n * -1);
	else
		pn = (unsigned int)(n);
	i = len;
	str[i--] = '\0';
	if (n < 0)
		str[0] = '-';
	while (i > 0)
	{
		str[i--] = (pn % 10) + '0';
		pn /= 10;
	}
	if (str[i] != '-')
		str[i] = (pn % 10) + '0';
	return (str);
}



// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (head->next)
// 	{
// 		head = head->next;
// 	}
// 	return (head);
// }

// int	main(void)
// {
// 	t_list *head;

// 	t_list *node1 = ft_lstnew("h");
// 	t_list *node2 = ft_lstnew("e");
// 	t_list *node3 = ft_lstnew("l");
// 	t_list *node4 = ft_lstnew("l");
// 	t_list *node5 = ft_lstnew("o");
// 	t_list *node6 = ft_lstnew("-> ");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node5;

// 	head = node1;

// 	ft_lstadd_front(&head, node6);
// 	printf("%s", (ft_lstlast(head))->content);
// 	printf("%d", ft_lstsize(head));
// 	while (head)
// 	{
// 		printf("%s", head->content);
// 		head = head->next;
// 	}
// 	printf("%d", ft_lstsize(head));
// }